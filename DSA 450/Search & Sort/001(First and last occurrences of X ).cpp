#include<iostream>
using namespace std;

void findFirstAndLastOccur(int *arr, int size, int x);

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

    cout << "Enter the value of x = ";
    cin >> x;

    findFirstAndLastOccur(arr, size, x);
}

void findFirstAndLastOccur(int *arr, int size, int x)
{
    int flag = 0, first, i, last;
    for(i = 0; i < size-1; i++)
    {
        if(x == arr[i])
        {
            if(flag == 0)
                first = i;
            else if(arr[i+1] != x || i == size-1)
            {
                last = i;
                break;
            }
            flag = 1;
        }
    }
    if(size-1 == i)
        last = first;
    cout << first << " " << last;
}
