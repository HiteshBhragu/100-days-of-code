#include<iostream>
using namespace std;
int main()
#define ROWS 3
#define COLS 3
{
    int matrix[ROWS][COLS]={ {1,2,3}, {1,2,3}, {1,2,3} };
    int matrix1[ROWS][COLS]={ {1,2,3}, {1,2,3}, {1,2,3} };
    int matrix2[ROWS][COLS];
    int row,col,i;

    for(row=0;row<ROWS;row++)
    {
        for(col=0;col<COLS;col++)
        {
            matrix2[row][col] = matrix[row][col] + matrix1[row][col];
        }
    }

    for(row=0;row<ROWS;row++)
    {
        for(col=0;col<COLS;col++)
        {
            cout<<matrix2[row][col]<<",";
        }
        cout<<endl;
    }
}
