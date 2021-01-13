#include<iostream>
using namespace std;

int main()
{
    int n, index = 0;
    cout << "Enter n = ";
    cin >> n;

    int arr[n][n];
    cout << "Enter elements : ";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    int arr1[n*n];
    for(int row = 0; row < n; row++)
    {
        for(int col = 0; col < n; col++)
        {
            arr1[index] = arr[row][col];
            index++;
        }
    }
    int temp;
    for(int i = 0; i < n*n; i++)
    {
        temp = arr1[i];
        for(int j = i+1; j < n*n; j++)
        {
            if(temp > arr1[j])
            {
                arr1[i] = arr1[j];
                arr1[j] = temp;
                temp = arr1[i];
            }
        }
    }
    index = 0;
    for(int i = 0; i < n; i++)
    {
        temp = arr1[i];
        for(int j = 0; j < n; j++)
        {
            cout << arr1[index] << " ";
            index++;
        }
        cout << endl;
    }
    return 0;
}

