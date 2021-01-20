#include<iostream>
#define ROWS 4
#define COLS 4
using namespace std;

void interchange(int [][COLS], int);

int main()
{
    int matrix[ROWS][COLS]={ {1,2,3,4}, {5,6,7,8}, {9,2,3,4}, {1,4,7,9} },k,l;
    interchange(matrix, ROWS);

    for(k=0;k<ROWS;k++)
    {
        for(l=0;l<ROWS;l++)
        {
            cout<<matrix[k][l]<<" ";
        }
        cout<<endl;
    }
}

void interchange(int matrix[][COLS], int size)
{
    int temp[10],temp1[10],j;

    for(j=0;j<size;j++)
    {
        temp[j] = matrix[0][j];
        matrix[0][j] = matrix[3][j];
        matrix[3][j] = temp[j];
    }
    for(j=0;j<size;j++)
    {
        temp1[j] = matrix[j][3];
        matrix[j][3] = matrix[j][0];
        matrix[j][0] = temp1[j];
    }
}
