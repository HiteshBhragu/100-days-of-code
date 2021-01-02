#include<iostream>
using namespace std;

int findMin(int [], int,int k);

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

    cout << "Minimum = " <<findMin(array, size,3);
}

int findMin(int array[], int size, int k)
{
    int *min = new int[k];
    min[0] = array[0];
    int kth = 0;
    for(int i = 1; i < size; i++)
    {
        if(min[kth] > array[i])
        {
            min[kth] = array[i];
            kth++;
        }
    }

    for(int i = 0; i < kth; i++)
    {
        cout << min[i]<<" ";
    }
    return min[kth-1];
}
