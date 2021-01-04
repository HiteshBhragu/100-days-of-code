#include<iostream>
using namespace std;

int findSumPair(int [], int, int);

int main()
{
    int size = 0, k;
    cout << "Enter the size of array = ";
    cin >> size;
    cout << "Enter the k = ";
    cin >> k;
    int *array = new int[size];
    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << findSumPair(array, size, k);
}

int findSumPair(int array[], int size, int k)
{
    int count = 0;
    for(int i = 0; i < size-1; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(array[i] + array[j] == k)
            {
                count++;
            }
        }
    }
    return count;
}

