
#include<iostream>
using namespace std;

void moveAllNegAndPos(int [], int);

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

    moveAllNegAndPos(array, size);

    for(int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

void moveAllNegAndPos(int array[], int size)
{
    int *negArray = new int[size];
    int *posArray = new int[size];
    int negCount = 0, posCount = 0, i;
    for(i = 0; i < size; i++)
    {
        if(0 > array[i])
        {
            negArray[negCount] = array[i];
            negCount++;
        }
        else if(0 <= array[i])
        {
            posArray[posCount] = array[i];
            posCount++;
        }
    }
    int count = 0;
    for(i = 0; i < size; i++)
    {
        if(i-count < negCount)
        {
            array[i] = negArray[i-count];
            array[i+1] = posArray[i-count];
            i++;
            count++;
        }
        else if(i-count >= negCount)
        {
            array[i] = posArray[i-negCount];
        }
        for(int j = 0; j < size; j++)
        {
            cout << array[j] << " ";
        }
        cout << endl;
    }
}
