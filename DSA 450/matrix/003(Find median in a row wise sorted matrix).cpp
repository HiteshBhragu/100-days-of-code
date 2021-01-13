#include<iostream>
using namespace std;

int main()
{
    int r, c, index = 0;
    cout << "Enter row size = ";
    cin >> r;
    cout << "Enter column size = ";
    cin >> c;

    int arr[r][c];
    cout << "Enter elements : ";
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            cin >> arr[i][j];
    }
    int arr1[c*r];
    for(int row = 0; row < r; row++)
    {
        for(int col = 0; col < c; col++)
        {
            arr1[index] = arr[row][col];
            index++;
        }
    }
    int temp;
    for(int i = 0; i < r*c; i++)
    {
        temp = arr1[i];
        for(int j = i+1; j < r*c; j++)
        {
            if(temp > arr1[j])
            {
                arr1[i] = arr1[j];
                arr1[j] = temp;
                temp = arr1[i];
            }
        }
    }
    cout << arr1[(c*r)/2];
    return 0;
}
