#include<iostream>
using namespace std;

int findMedian(int [], int);

int main()
{
    int size;
    cout << "Enter the size of array = ";
    cin >> size;

    int *array = new int[size];
    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << findMedian(array, size);
}

int findMedian(int array[], int size)
{
    int temp, i, m;;
    for(i = 0; i < size-1; i++)
    {
        temp = array[i];
        for(int j = i+1; j < size; j++)
        {
            if(temp > array[j])
            {
                array[i] = array[j];
                array[j] = temp;
                temp = array[i];
            }
        }
    }
    if(size % 2 == 0)
    {
        m = array[size/2]+array[(size/2)-1];
        m = m/2;
    }
    else
    {
        m = array[size/2];
    }

    return m;
}

