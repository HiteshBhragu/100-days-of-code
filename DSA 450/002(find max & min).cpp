#include<iostream>
using namespace std;

int findMax(int [], int);
int findMin(int [], int);

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

    cout << "Maximum = " <<findMax(array, size) << endl;
    cout << "Minimum = " <<findMin(array, size);
}

int findMax(int array[], int size)
{
    int max = array[0];
    for(int i = 1; i < size; i++)
    {
        if(max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}

int findMin(int array[], int size)
{
    int min = array[0];
    for(int i = 1; i < size; i++)
    {
        if(min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}
