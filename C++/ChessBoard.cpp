
#include<iostream>
using namespace std;
#define SIZE 10
void up(char mat[][SIZE], int *path, int row, int col);
void down(char mat[][SIZE], int *path, int row, int col);
void left(char mat[][SIZE], int *path, int row, int col);
void right(char mat[][SIZE], int *path, int row, int col);
void getPossibleMoves(char mat[][SIZE], int *path, int row, int col);
void findRook(char mat[][SIZE], char *path, int *i, int len, char*);

int main()
{
    char fenNotation[100] = "rn1qk1nr/p5pp/3b4/4p3/4P3/7N/3P1P2/R2QKB1R w";
    int len = 0;
    while(fenNotation[len] != 0)
    {
        len++;
    }
    cout << "length = " << len << endl;
    char mat[10][10] = {32};
    for(int row = 1; row < 9; row++)
    {
        for(int col = 1; col < 9; col++)
        {
            mat[row][col] = ' ';
        }
    }
    int i = -1;
    cout << "Enter the fen notation = ";
    //cin >> fenNotation;
    cout << fenNotation << endl;
    for(int col = 1; col < 9; col++)
    {
        mat[0][col] = 96 + col;
        mat[9][col] = 96 + col;
        mat[col][0] = 57 - col;
        mat[col][9] = 57 - col;
    }

    for(int row = 1; row < 9; row++)
    {
        for(int col = 1; col < 9; col++)
        {
            i++;
            if(fenNotation[i] == '/')
            {
                col--;
            }
            else if(fenNotation[i] > '0' && fenNotation[i] < '9')
            {
                col = col + (fenNotation[i]-49) ;
            }
            else
            {
                mat[row][col] = fenNotation[i];
            }
        }
    }

    for(int row = 0; row < 10; row++)
    {
        for(int col = 0; col < 10; col++)
        {
            cout << mat[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;
    char path[100] = {0};
    i = -1;

    cout << "[";
    findRook(mat, path, &i, len, fenNotation);
    path[i] = '\0';
    cout << path;
    cout << "]" << endl;
    return 0;
}

void findRook(char mat[][SIZE], char *path, int *i, int len, char *fenNotation)
{
    int pth[20] = {0};
    for(int row = 1; row < 9; row++)
    {
        for(int col = 1; col < 9; col++)
        {
            if('w' == fenNotation[len-1])
            {
                if(mat[row][col] == 'R')
                {
                    getPossibleMoves(mat, pth, row, col);
                    for(int j = mat[pth[2]][0] - 48; j > mat[row][0] - 48 ; j--)   // up
                    {
                        *i = *i + 1;
                        path[*i] = mat[0][pth[1]];
                        *i = *i + 1;
                        path[*i] = mat[row][0];
                        *i = *i + 1;
                        path[*i] = mat[0][pth[1]];
                        *i = *i + 1;
                        path[*i] = j + 48;
                        *i = *i + 1;
                        path[*i] = ',';
                    }
                    for(int j = mat[pth[4]][0] - 48; j < mat[pth[0]][0] - 48; j++) // down
                    {
                        *i = *i + 1;
                        path[*i] = mat[0][pth[1]];
                        *i = *i + 1;
                        path[*i] = mat[row][0];
                        *i = *i + 1;
                        path[*i] = mat[0][pth[1]];
                        *i = *i + 1;
                        path[*i] = j + 48;
                        *i = *i + 1;
                        path[*i] = ',';
                    }
    //                cout << "vvvvvvvvvvvvvv = " << mat[0][path[7]] << endl;
                    int k = 0;
                    for(int j = pth[7]; j < pth[1]; j++)  // left
                    {
                        *i = *i + 1;
                        path[*i] =  mat[0][pth[1]];
                        *i = *i + 1;
                        path[*i] = mat[row][0];
                        *i = *i + 1;
                        path[*i] = mat[0][pth[7] - k];
                        *i = *i + 1;
                        path[*i] = mat[row][0];
                        *i = *i + 1;
                        path[*i] = ',';
                    }
                    k = 0;
                    for(int j = pth[9]; j > pth[1] ; j--)  // right
                    {
                        *i = *i + 1;
                        path[*i] = mat[0][pth[1]];
                        *i = *i + 1;
                        path[*i] = mat[row][0];
                        *i = *i + 1;
                        path[*i] = mat[0][pth[9] - k++];
                        *i = *i + 1;
                        path[*i] = mat[row][0];
                        *i = *i + 1;
                        path[*i] = ',';
                    }
                }
            }
            else if('b' == fenNotation[len-1])
            {
                if(mat[row][col] == 'r')
                {
                    getPossibleMoves(mat, pth, row, col);
                    for(int j = mat[pth[2]][0] - 48; j > mat[row][0] - 48 ; j--)   // up
                    {

                        *i = *i + 1;
                        path[*i] = mat[0][pth[1]];
                        *i = *i + 1;
                        path[*i] = mat[row][0];
                        *i = *i + 1;
                        path[*i] = mat[0][pth[1]];
                        *i = *i + 1;
                        path[*i] = j + 48;
                        *i = *i + 1;
                        path[*i] = ',';
                    }
                    for(int j = mat[pth[4]][0] - 48; j < mat[pth[0]][0] - 48; j++) // down
                    {
                        *i = *i + 1;
                        path[*i] = mat[0][pth[1]];
                        *i = *i + 1;
                        path[*i] = mat[row][0];
                        *i = *i + 1;
                        path[*i] = mat[0][pth[1]];
                        *i = *i + 1;
                        path[*i] = j + 48;
                        *i = *i + 1;
                        path[*i] = ',';
                    }
    //                cout << "vvvvvvvvvvvvvv = " << mat[0][path[7]] << endl;
                    int k = 0;
                    for(int j = pth[7]; j < pth[1]; j++)  // left
                    {
                        *i = *i + 1;
                        path[*i] =  mat[0][pth[1]];
                        *i = *i + 1;
                        path[*i] = mat[row][0];
                        *i = *i + 1;
                        path[*i] = mat[0][pth[7] - k];
                        *i = *i + 1;
                        path[*i] = mat[row][0];
                        *i = *i + 1;
                        path[*i] = ',';
                    }
                    k = 0;
                    for(int j = pth[9]; j > pth[1] ; j--)  // right
                    {
                        *i = *i + 1;
                        path[*i] = mat[0][pth[1]];
                        *i = *i + 1;
                        path[*i] = mat[row][0];
                        *i = *i + 1;
                        path[*i] = mat[0][pth[9] - k++];
                        *i = *i + 1;
                        path[*i] = mat[row][0];
                        *i = *i + 1;
                        path[*i] = ',';
                    }
                }
            }
        }
    }
}

void getPossibleMoves(char mat[][SIZE], int *path, int row, int col)
{
    path[0] = row, path[1] = col;
    //cout << "row = " << row << " col = " << col << endl;

    up(mat, path, row, col);
    //cout << "up   path = " << path[0] << "," << path[1] << endl;
    //cout << "vvvvvvvvv = " << mat[row][0] << "," << mat[path[0]][0] << endl;

    down(mat, &path[4], row, col);
//                cout << "down   path = " << path[0] << "," << path[1] << endl;
    left(mat, &path[6], row, col);
//                cout << "left   path = " << path[0] << "," << path[1] << endl;
    right(mat, &path[8], row, col);
//                cout << "right   path = " << path[0] << "," << path[1] << endl << endl;
}

void up(char mat[][SIZE], int *path, int row, int col)
{
    while(row > 0)
    {
        if(mat[row-1][col] == ' ')
        {
            row--;
        }
        else
        {
            break;
        }
    }
    path[2] = row;
    path[3] = col;
    return;
}

void down(char mat[][SIZE], int *path, int row, int col)
{
    while(row >= 0)
    {
        if(mat[row+1][col] == ' ')
        {
            row++;
        }
        else
        {
            break;
        }
    }
    path[0] = row;
    path[1] = col;
    return;
}
void left(char mat[][SIZE], int *path, int row, int col)
{
    while(col > 0)
    {
        if(mat[row][col-1] == ' ')
        {
            col--;
        }
        else
        {
            break;
        }
    }
    path[0] = row;
    path[1] = col;
    return;
}
void right(char mat[][SIZE], int *path, int row, int col)
{
    while(col >= 0)
    {
        if(mat[row][col+1] == ' ')
        {
            col++;
        }
        else
        {
            break;
        }
    }
    path[0] = row;
    path[1] = col;
    return;
}
