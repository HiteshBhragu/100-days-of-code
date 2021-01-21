#include<iostream>
using namespace std;

void findElementEqulToIndex(int *arr, int size);

int main()
{
    int size, x;
    cout << "Enter the size of array = ";
    cin >> size;
    int *arr = new int[size];
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    findElementEqulToIndex(arr, size);
}

void findElementEqulToIndex(int *arr, int size)
{

    for(int i = 0; i < size; i++)
    {
        if(i+1 == arr[i])
        {
            cout << i+1;
            break;
        }
    }
    cout << "-1";
}

