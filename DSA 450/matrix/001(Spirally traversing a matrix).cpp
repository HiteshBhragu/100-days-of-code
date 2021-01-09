#include<iostream>
using namespace std;

int main()
{
    int r, c, n;
    cin >> r;
    cin >> c;

    int arr[r][c];

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            cin >> arr[i][j];
    }

    if(r%2 != 0)
    {
        n = r/2+1;
    }
    else
    {
        n = r/2;
    }

    int j, k, l, m;
    for(int i = 0; i < n; i++)
    {
        for(j = i; j < r-i; j++)
            cout << arr[i][j] << " ";
        for(k = c-j+1; k < c-i; k++)
            cout << arr[k][j-1] << " ";
        for(l = k-2; l > r-k-1; l--)
            cout << arr[k-1][l] << " ";
        for(m = k-2; m > c-k; m--)
            cout << arr[m][l+1] << " ";
    }
}
