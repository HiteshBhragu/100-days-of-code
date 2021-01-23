#include<iostream>
#define ROWS 3
#define COLS 3
using namespace std;
int sum_of_diagonal(int[][COLS], int);
int main()
{
    int matrix[ROWS][ROWS]={ {1,2,3}, {2,3,4}, {3,4,5} };
    int row,col,sum;

    for(row=0;row<ROWS;row++)
    {
        for(col=0;col<COLS;col++)
        {
            cout<<"Enter the number = ";
            cin>>matrix[row][col];
        }
        cout<<endl;
    }
    cout<<endl;


    sum = sum_of_diagonal( matrix,ROWS);
    cout<<"The sum of diagonal is = "<<sum;

}

int sum_of_diagonal(int matrix[][COLS],int size)
{
    int row,sum=0;

    for(row=0;row<size;row++)
    {
        sum=sum+matrix[row][row];
    }

    return sum;
}
