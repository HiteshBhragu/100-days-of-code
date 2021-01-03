#include<iostream>
using namespace std;

int findMin(int [], int,int k);

int main()
{
    int size = 0, k;
    cout << "Enter the size of array = ";
    cin >> size;

    int *array = new int[size];
    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the kth = ";
    cin >> k;
    cout << "Minimum = " <<findMin(array, size,k);
}

int findMin(int originalArray[], int size, int k)
{
    int temp;
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
            }
        }
    }
    return array[k-1];
}

