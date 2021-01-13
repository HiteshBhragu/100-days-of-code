#include<iostream>
using namespace std;

int main()
{
    int r, c;
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

    int count = 0, max = 0;
    for(int i = 0; i < r; i++)
    {
        count = 0;
        for(int j = 0; j < c; j++)
        {
            if(1 == arr[i][j])
                count++;
        }
        if(max < count)
            max = i;
    }
    cout << max << endl;

}
