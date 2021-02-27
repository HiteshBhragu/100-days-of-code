#include<iostream>
using namespace std;
int brideFinding(int mat[][100], int row, int col, int *output);
int findDist(int row, int col);
int findQA(int mat[][100], int row, int col);

int main()
{
    int N, M, status = 0;
    cout << "Enter the value of N = ";
    cin >> N;
    cout << "Enter the value of M = ";
    cin >> M;

    int mat[100][100], output[3];

    for(int row = 0; row < N; row++)
    {
        for(int col = 0; col < M; col++)
        {
            cin >> mat[row][col];
        }
    }
    status = brideFinding(mat, N, M, output);
    if(-1 == status)
    {
        cout << "''Polygamy not allowed''";
    }
    else if(1 == status)
    {
        cout << "''No suitable girl found''";
    }
    else
    {
        cout << "\n" << output[0]+1 << ":" << output[1]+1 << ":" << output[2];
    }
}

int brideFinding(int mat[][100], int N, int M, int *output)
{
    int qa[20] = {0}, dist[20], i = -1, r[20], c[20];
    for(int row = 0; row < N; row++)
    {
        for(int col = 0; col < M; col++)
        {
            if(row != 0 || col != 0)
            {
                if(mat[row][col] == 1)
                {
                    i++;
                    dist[i] = findDist(row, col);
                    qa[i] = findQA(mat, row, col);
                    r[i] = row;
                    c[i] = col;
                }
            }
        }
    }
    int flag = 0;
    for(int k = 0; k <= i; k++)
    {
        if(qa[k] != 0)
        {
            flag++;
        }
    }
    if(flag == 0)
    {
        return 1;
    }
    int max = qa[0], count = 0, arr[10], c1 = 0;

    for(int h = 1; h <= i; h++)
    {
        if(max < qa[h])
        {
            max = qa[h];
        }
    }
    for(int h = 1; h <= i; h++)
    {
        if(max == qa[h])
        {
            max = qa[h];
            arr[c1] = h;
            c1++;
            count++;
        }
    }
    int min = dist[arr[0]];
    flag = 0;
    c1 = 0;
    if(count > 1)
    {
        for(int k = 0; k < count; k++)
        {
            if(min > dist[arr[k]])
            {
                min = dist[arr[k]];
            }
        }
        for(int k = 0; k < count; k++)
        {
            if(min == dist[arr[k]])
            {
                flag++;
            }
        }
        if(flag == 1)
        {
            output[0] = r[arr[0]];
            output[1] = c[arr[0]];
            output[2] = qa[arr[0]];
            return 0;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        output[0] = r[arr[0]];
        output[1] = c[arr[0]];
        output[2] = qa[arr[0]];
        return 0;
    }
}

int findDist(int row, int col)
{
    if(0 == row)
    {
        return col;
    }
    else
    {
        return col + row;
    }
}

int findQA(int mat[][100], int row, int col)
{
    int count = 0;
    if(mat[row+1][col] == 1)
    count++;
    if(mat[row+1][col+1] == 1)
    count++;
    if(mat[row+1][col-1] == 1)
    count++;
    if(mat[row-1][col] == 1)
    count++;
    if(mat[row-1][col+1] == 1)
    count++;
    if(mat[row-1][col-1] == 1)
    count++;
    if(mat[row][col+1] == 1)
    count++;
    if(mat[row][col-1] == 1)
    count++;

    return count;
}
