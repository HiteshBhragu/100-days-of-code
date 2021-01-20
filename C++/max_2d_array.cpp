#include<iostream>
using namespace std;
int main()
#define ROWS 3
#define COLS 3
{
    int matrix[ROWS][COLS]={ {1,2,3}, {1,2,3}, {1,2,-8} };

    int matrix2[ROWS][COLS];
    int row,col,max=matrix[0][0];

    for(row=0;row<ROWS;row++)
    {
        for(col=0;col<COLS;col++)
        {
            if(max<matrix[row][col])
            {
                max = matrix[row][col];
            }
        }
    }
    cout<<max;
}
