#include<iostream>
#define ROWS 3
using namespace std;
void cal_min(int [][ROWS], int, int*, int*);
int main()
{
    int mat[ROWS][ROWS]={{1,2,3}, {1,4,9}, {76,34,21}}, min_rows[ROWS], min_col[ROWS];
    int i,j;
    cal_min(mat, ROWS, min_rows, min_col);
    cout<<"Minimum element in rows = ";
    for(i=0;i<ROWS;i++)
    {
        cout<<min_rows[i]<<" ";
    }
    cout<<endl;
    cout<<"Minimum element in cols = ";
    for(i=0;i<ROWS;i++)
    {
        cout<<min_col[i]<<" ";
    }
}

void cal_min(int mat[][ROWS], int n, int* min_row, int* min_col)
{
    int i,j,m,k=0,l=0;

    for(i=0;i<n;i++)
    {
        m = mat[i][0];
        for(j=0;j<n;j++)
        {
            if(m > mat[i][j])
            {
                m = mat[i][j];
            }
        }
        min_row[k] = m;
        k++;
    }

    for(i=0;i<n;i++)
    {
        m = mat[0][i];
        for(j=0;j<n;j++)
        {
            if(m > mat[j][i])
            {
                m = mat[j][i];
            }
        }
        min_col[l] = m;
        l++;
    }
}
