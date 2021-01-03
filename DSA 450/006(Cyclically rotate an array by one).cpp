#include<iostream>
using namespace std;

void rotateArrayByOne(int [], int);

int main()
{
    int size = 0;
    cout << "Enter the size of array = ";
    cin >> size;
    int *array = new int[size];
    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    rotateArrayByOne(array, size);

    for(int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

void rotateArrayByOne(int array[], int size)
{
    int temp = array[size-1];

    for(int i = 1; i < size; i++)
    {
        array[size - i] = array[size-i-1];
    }
    array[0] = temp;
}
