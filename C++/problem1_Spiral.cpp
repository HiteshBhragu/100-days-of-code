#include <iostream>
using namespace std;

int main()
{
    int i, j ,k, l, m, n, e, incr = 0;

    cout << "Enter the size of matrix = ";
    cin >> n;
    if(n > 100)
    {
        return 0;
    }

    int arr[n][n];
    e = n/2;
    if(n%2 != 0)
    {
        e = n/2+1;
    }
    int count = 5;
    for(i = 0; i < e; i++)
    {
        for(j = i; j < n-i; j++)
        {
            incr++;
            arr[i][j] = count;
        }

        for(k = n-j+1; k < n-i; k++)
        {
            incr++;
            arr[k][j-1] = count;
        }

        for(l = k-2; l > n-k-1; l--)
        {
            arr[k-1][l] = count;
        }

        for(m = k-2; m > n-k; m--)
        {
            arr[m][l+1] = count;
        }
        count--;
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
