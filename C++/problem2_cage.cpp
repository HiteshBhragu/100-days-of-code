#include <iostream>
#define SIZE 500
using namespace std;

int findMini(int a, int b, int c);
int checkUp(int *visited, char mat[][SIZE], int *input, int *i);
int checkDown(int *visited, char mat[][SIZE], int *input, int *i);
int checkLeft(int *visited, char mat[][SIZE], int *input, int *i);
int checkRight(int *visited, char mat[][SIZE], int *input, int *i);
int checkUpForGate(int *visited, char mat[][SIZE], int *input, int *i);
int checkDownForGate(int *visited, char mat[][SIZE], int *input, int *i);
int checkLeftForGate(int *visited, char mat[][SIZE], int *input, int *i);
int checkRightForGate(int *visited, char mat[][SIZE], int *input, int *i);


int main()
{
    int input[8], R,C;
    float safeCount = 0;
    int count = 0;

    cout << "Enter the size of matrix : ";
    cin >> R;
    cin >> C;
    for(int i = 0; i < 8; i++)
    {
        cin >> input[i];
    }
    char mat[SIZE][SIZE];

    for(int i = 0; i < R; i++)
    {
        for(int j = 0; j < C; j++)
        {
            cin >> mat[i][j];
            if(mat[i][j] == 'G')
            {
                count++;
            }
        }
    }

    int a, b, c, d, i = 1, j = -1;
    int mini;
    int visited[count*2] = {0}, gate[2] = {0}, miniPath[3] = {0};
    for(int k = 0; k < 3; k++)
    {
        j++;
        gate[0] = input[j];
        j++;
        gate[1] = input[j];
        visited[0] = input[6];
        visited[1] = input[7];
        a = checkUp(visited, mat, gate, &i);
        i = 1;

        d = checkDown(visited, mat, gate, &i);
        i = 1;

        b = checkLeft(visited, mat, gate, &i);
        i = 1;

        c = checkRight(visited, mat, gate, &i);

        mini = findMini(a, b, c);
        mini = mini - 1;
        if(mini > 0)
        {
            if(d > 0)
            {
                if(mini > d)
                {
                    mini = d;
                }
            }
        }
        else
        {
            if(d > 0)
            {
                mini = d;
            }
        }
        mini = mini - 1;
        miniPath[k] = mini;
    }
    if(miniPath[0] < 0 && miniPath[1] < 0 && miniPath[2] < 0)
    {
        safeCount = count-1;
    }
    else
    {
        int k = -1, q, minGate[3] = {0};;
        j = -1;
        for(int row = 0; row < R; row++)
        {
            for(int col = 0; col < C; col++)
            {
                if(mat[row][col] == 'G')
                {
                    j = -1;
                    for(q = 0; q < 3; q++)
                    {
                        visited[0] = row;
                        visited[1] = col;
                        j++;
                        gate[0] = input[j];
                        j++;
                        gate[1] = input[j];

                        i = 1;
                        a = checkUpForGate(visited, mat, gate, &i);
                        i = 1;

                        b = checkLeftForGate(visited, mat, gate, &i);
                        i = 1;

                        c = checkRightForGate(visited, mat, gate, &i);
                        i = 1;

                        d = checkDownForGate(visited, mat, gate, &i);
                        mini = findMini(a, b, c);
                        mini = mini - 1;
                        if(mini > 0)
                        {
                            if(d > 0)
                            {
                                if(mini > d)
                                {
                                    mini = d;
                                }
                            }
                        }
                        else
                        {
                            if(d > 0)
                            {
                                mini = d;
                            }
                        }
                        mini = mini - 1;
                        minGate[q] = mini;
                        if(mini >= 0)
                        {
                            if(mini < miniPath[q])
                            {
                                safeCount++;
                                break;
                            }
                        }
                    }
                    if(minGate[0] < 0 && minGate[1] < 0 && minGate[2] < 0)
                    {
                        visited[0] = input[6];
                        visited[1] = input[7];
                        gate[0] = row;
                        gate[1] = col;

                        i = 1;
                        a = checkUp(visited, mat, gate, &i);
                        i = 1;

                        b = checkLeft(visited, mat, gate, &i);
                        i = 1;

                        c = checkRight(visited, mat, gate, &i);
                        i = 1;

                        d = checkDown(visited, mat, gate, &i);

                        mini = findMini(a, b, c);
                        mini = mini - 1;
                        if(mini > 0)
                        {
                            if(d > 0)
                            {
                                if(mini > d)
                                {
                                    mini = d;
                                }
                            }
                        }
                        else
                        {
                            if(d > 0)
                            {
                                mini = d;
                            }
                        }
                        mini = mini - 1;
                        if(mini < 0)
                        {
                            safeCount++;
                        }
                    }
                }
            }
        }
    }
    cout << "Total grassland = " << count << endl;
    cout << "Safe count =  " << safeCount << endl;
    float total = 0;
    total = (safeCount*100) / count;
    cout << total;
}


int checkUp(int *visited, char mat[][SIZE], int *input, int *i)
{
    int a = 0, b = 0, c = 0;
    if(visited[0] == input[0] && visited[1] == input[1])
    {
        return 1;
    }
    int t;
    for(int j = 2; j <= *i; j++)
    {
        if(visited[0]-1 == visited[j])
        {
            t = j;
            t++;
            if(visited[1] == visited[t])
            {
                return -1;
            }
        }
        j++;
    }
    if('G' == mat[visited[0]-1][visited[1]] || mat[visited[0]-1][visited[1]] == 'M')
    {
        visited[0] = visited[0]-1;
        *i = *i + 1;
        visited[*i] = visited[0];
        *i = *i + 1;
        visited[*i] = visited[1];

        a = checkUp(visited, mat, input, i);
        b = checkLeft(visited, mat, input, i);
        c = checkRight(visited, mat, input, i);

        int mini;
        mini = findMini(a, b, c);
        if(mini > 0)
        {
            *i = *i - 2;
            visited[0] = visited[0]+1;
            return mini;
        }
    }
    if(a == -1 && b == -1 && c == -1)
    {
        visited[0] = visited[0]+1;
    }
    return -1;
}
int checkDown(int *visited, char mat[][SIZE], int *input, int *i)
{
    int a = 0, b = 0, c = 0;

    if(visited[0] == input[0] && visited[1] == input[1])
    {
        return 1;
    }
    int t;
    for(int j = 2; j <= *i; j++)
    {
        if(visited[0]+1 == visited[j])
        {
            t = j;
            t++;
            if(visited[1] == visited[t])
            {
                return -1;
            }
        }
        j++;
    }
    if('G' == mat[visited[0]+1][visited[1]] || mat[visited[0]+1][visited[1]] == 'M')
    {
        visited[0] = visited[0]+1;
        *i = *i + 1;
        visited[*i] = visited[0];
        *i = *i + 1;
        visited[*i] = visited[1];

        a = checkDown(visited, mat, input, i);
        b = checkLeft(visited, mat, input, i);
        c = checkRight(visited, mat, input, i);

        int mini;
        mini = findMini(a, b, c);
        if(mini > 0)
        {
            *i = *i - 2;
            visited[0] = visited[0]-1;
            return mini;
        }
    }
    if(a == -1 && b == -1 && c == -1)
    {
        visited[0] = visited[0]-1;
    }
    return -1;
}

int checkLeft(int *visited, char mat[][SIZE], int *input, int *i)
{
    int a = 0, b = 0, c = 0;

    if(visited[0] == input[0] && visited[1] == input[1])
    {
        return 1;
    }
    int t;
    for(int j = 2; j <= *i; j++)
    {
        if(visited[0] == visited[j])
        {
            t = j;
            t++;
            if(visited[1]-1 == visited[t])
            {
                return -1;
            }
        }
        j++;
    }
    if('G' == mat[visited[0]][visited[1]-1] || mat[visited[0]][visited[1]-1] == 'M')
    {
        visited[1] = visited[1]-1;
        *i = *i + 1;
        visited[*i] = visited[0];
        *i = *i + 1;
        visited[*i] = visited[1];

        a = checkUp(visited, mat, input, i);
        c = checkDown(visited, mat, input, i);
        b = checkLeft(visited, mat, input, i);

        int mini;
        mini = findMini(a, b, c);
        if(mini > 0)
        {
            *i = *i - 2;
            visited[1] = visited[1]+1;
            return mini;
        }
    }
    if(a == -1 && b == -1 && c == -1)
    {
        visited[1] = visited[1]+1;
    }
    return -1;
}
int checkRight(int *visited, char mat[][SIZE], int *input, int *i)
{
    int a = 0, b = 0, c = 0;

    if(visited[0] == input[0] && visited[1] == input[1])
    {
        return 1;
    }
    int t;
    for(int j = 2; j <= *i; j++)
    {
        if(visited[0] == visited[j])
        {
            t = j;
            t++;
            if(visited[1]+1 == visited[t])
            {
                return -1;
            }
        }
        j++;
    }
    if('G' == mat[visited[0]][visited[1]+1] || mat[visited[0]][visited[1]+1] == 'M')
    {
        visited[1] = visited[1]+1;
        *i = *i + 1;
        visited[*i] = visited[0];
        *i = *i + 1;
        visited[*i] = visited[1];

        a = checkUp(visited, mat, input, i);
        b = checkDown(visited, mat, input, i);
        c = checkRight(visited, mat, input, i);

        int mini;
        mini = findMini(a, b, c);
        if(mini > 0)
        {
            *i = *i - 2;
            visited[1] = visited[1]-1;
            return mini;
        }
    }
    if(a == -1 && b == -1 && c == -1)
    {
        visited[1] = visited[1]-1;
    }
    return -1;
}

int findMini(int a, int b, int c)
{
    if(a > 0)
    {
        if(b > 0)
        {
            if(a >= b)
            {
                if(c > 0)
                {
                    if(c <= b)
                    {
                        return 1 + c;
                    }
                    return 1 + b;
                }
                return 1 + b;
            }
            else
            {
                if(c > 0)
                {
                    if(c <= a)
                    {
                        return 1 + c;
                    }
                    return 1 + a;
                }
                return 1 + a;
            }
        }
        else if(c > 0)
        {
            if(a <= c)
            {
                return 1 + a;
            }
            return 1 + c;
        }
        return 1 + a;
    }
    else if(b > 0)
    {
        if(c > 0)
        {
            if(b <= c)
            {
                return 1 + b;
            }
            return 1 + c;
        }
        return 1 + b;
    }
    else if(c > 0)
    {
        return 1 + c;
    }
    return -1;
}
int checkUpForGate(int *visited, char mat[][SIZE], int *input, int *i)
{
    int a = 0, b = 0, c = 0;

    if(visited[0] == input[0] && visited[1] == input[1])
    {
        return 1;
    }
    int t;
    for(int j = 2; j <= *i; j++)
    {
        if(visited[0]-1 == visited[j])
        {
            t = j;
            t++;
            if(visited[1] == visited[t])
            {
                return -1;
            }
        }
        j++;
    }
    if('G' == mat[visited[0]-1][visited[1]])
    {
        visited[0] = visited[0]-1;
        *i = *i + 1;
        visited[*i] = visited[0];
        *i = *i + 1;
        visited[*i] = visited[1];

        a = checkUpForGate(visited, mat, input, i);
        b = checkLeftForGate(visited, mat, input, i);
        c = checkRightForGate(visited, mat, input, i);

        int mini;
        mini = findMini(a, b, c);
        if(mini > 0)
        {
            *i = *i - 2;
            visited[0] = visited[0]+1;
            return mini;
        }
    }
    if(a == -1 && b == -1 && c == -1)
    {
        visited[0] = visited[0]+1;
    }
    return -1;
}
int checkDownForGate(int *visited, char mat[][SIZE], int *input, int *i)
{
    int a = 0, b = 0, c = 0;

    if(visited[0] == input[0] && visited[1] == input[1])
    {
        return 1;
    }
    int t;
    for(int j = 2; j <= *i; j++)
    {
        if(visited[0]+1 == visited[j])
        {
            t = j;
            t++;
            if(visited[1] == visited[t])
            {
                return -1;
            }
        }
        j++;
    }
    if('G' == mat[visited[0]+1][visited[1]])
    {
        visited[0] = visited[0]+1;
        *i = *i + 1;
        visited[*i] = visited[0];
        *i = *i + 1;
        visited[*i] = visited[1];

        a = checkDownForGate(visited, mat, input, i);
        b = checkLeftForGate(visited, mat, input, i);
        c = checkRightForGate(visited, mat, input, i);

        int mini;
        mini = findMini(a, b, c);
        if(mini > 0)
        {
            *i = *i - 2;
            visited[0] = visited[0]-1;
            return mini;
        }
    }
    if(a == -1 && b == -1 && c == -1)
    {
        visited[0] = visited[0]-1;
    }
    return -1;
}

int checkLeftForGate(int *visited, char mat[][SIZE], int *input, int *i)
{
    int a = 0, b = 0, c = 0;

    if(visited[0] == input[0] && visited[1] == input[1])
    {
        return 1;
    }
    int t;
    for(int j = 2; j <= *i; j++)
    {
        if(visited[0] == visited[j])
        {
            t = j;
            t++;
            if(visited[1]-1 == visited[t])
            {
                return -1;
            }
        }
        j++;
    }
    if('G' == mat[visited[0]][visited[1]-1])
    {
        visited[1] = visited[1]-1;
        *i = *i + 1;
        visited[*i] = visited[0];
        *i = *i + 1;
        visited[*i] = visited[1];

        a = checkUpForGate(visited, mat, input, i);
        c = checkDownForGate(visited, mat, input, i);
        b = checkLeftForGate(visited, mat, input, i);

        int mini;
        mini = findMini(a, b, c);
        if(mini > 0)
        {
            *i = *i - 2;
            visited[1] = visited[1]+1;
            return mini;
        }
    }
    if(a == -1 && b == -1 && c == -1)
    {
        visited[1] = visited[1]+1;
    }
    return -1;
}
int checkRightForGate(int *visited, char mat[][SIZE], int *input, int *i)
{
    int a = 0, b = 0, c = 0;

    if(visited[0] == input[0] && visited[1] == input[1])
    {
        return 1;
    }

    int t;
    for(int j = 2; j <= *i; j++)
    {
        if(visited[0] == visited[j])
        {
            t = j;
            t++;
            if(visited[1]+1 == visited[t])
            {
                return -1;
            }
        }
        j++;
    }
    if('G' == mat[visited[0]][visited[1]+1])
    {
        visited[1] = visited[1]+1;
        *i = *i + 1;
        visited[*i] = visited[0];
        *i = *i + 1;
        visited[*i] = visited[1];

        a = checkUpForGate(visited, mat, input, i);
        b = checkDownForGate(visited, mat, input, i);
        c = checkRightForGate(visited, mat, input, i);

        int mini;
        mini = findMini(a, b, c);

        if(mini > 0)
        {
            *i = *i - 2;
            visited[1] = visited[1]-1;
            return mini;
        }
    }
    if(a == -1 && b == -1 && c == -1)
    {
        visited[1] = visited[1]-1;
    }
    return -1;
}
