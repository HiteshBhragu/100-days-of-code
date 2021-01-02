#include<iostream>
using namespace std;

void reverse_array(int array[], int size);

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

    reverse_array(array, size);
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

void reverse_array(int array[], int size)
{
    int temp;
    for(int i = 0; i < size/2; i++)
    {
        temp = array[size-i-1];
        array[size-i-1] = array[i];
        array[i] = temp;
    }
}
