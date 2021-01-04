#include<iostream>
using namespace std;

int countInverse(int [], int);

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
    cout << countInverse(array, size);
}

int countInverse(int originalArray[], int size)
{
    int temp;
    int count = 0;
    int *array = new int[size];
    for(int i = 0; i < size; i++)
    {
        array[i] = originalArray[i];
    }
    for(int i = 0; i < size-1; i++)
    {
        temp = array[i];
        for(int j = i+1; j < size; j++)
        {
            if(temp > array[j])
            {
                array[i] = array[j];
                array[j] = temp;
                temp = array[i];
                count++;
            }
        }
    }
    return count;
}


