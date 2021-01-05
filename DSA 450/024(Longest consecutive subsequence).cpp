#include<iostream>
using namespace std;

int findLngestCoinsSubseq(int [], int);

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
    cout << findLngestCoinsSubseq(array, size);
}

int findLngestCoinsSubseq(int array[], int size)
{
    int temp, i, count = 1;
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
    for(i = 0; i < size-1; i++)
    {
        if(array[i]+1 == array[i+1])
            count++;
        else
            break;
    }
    return count;
}
