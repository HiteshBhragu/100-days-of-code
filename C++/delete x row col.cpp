#include<iostream>
#define ROWS 4
#define COLS 4
using namespace std;

int remove_x_row_and_col(int [][COLS],int [][COLS], int, int);

int main()
{
    int matrix[ROWS][COLS]={ {1,2,3,4}, {5,6,7,8}, {9,2,3,4}, {1,4,7,9} };
    int matrix1[ROWS][COLS];
    int c,n,k,l;

    cout<<"Enter the n = ";
    cin>>n;
    c = remove_x_row_and_col(matrix, matrix1, ROWS, n);

    for(k=0;k<c;k++)
    {
        for(l=0;l<c;l++)
        {
            cout<<matrix1[k][l]<<" ";
        }
        cout<<endl;
    }
}

int remove_x_row_and_col(int matrix[][COLS],int matrix1[][COLS], int rows, int n)
{
    int  i,j,k=0,l=0;

    for(i=n;i<rows;i++)
    {
        l=0;
        for(j=n;j<rows;j++)
        {
           matrix1[k][l] = matrix[i][j];
           l++;
        }
        k++;
    }
    return k;
}
