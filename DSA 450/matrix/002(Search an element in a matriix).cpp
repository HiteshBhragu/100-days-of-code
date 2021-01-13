#include<iostream>
using namespace std;

int main()
{
    int r, c, e;
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
    cout << "Enter element to search = ";
    cin >> e;
    for(int row = 0; row < r; row++)
    {
        for(int col = 0; col < c; col++)
        {
            if(arr[row][col] == e)
            {
                cout << "True";
                return 0;
            }
        }
    }
    cout << "False";
    return 0;
}
