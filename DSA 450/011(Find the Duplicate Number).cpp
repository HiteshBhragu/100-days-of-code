#include<iostream>
using namespace std;

int findDuplicate(int [], int);

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

    cout << findDuplicate(array, size);
}

int findDuplicate(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(array[i] == array[j])
            {
                return array[i];
            }
        }
    }
    return 0;
}


