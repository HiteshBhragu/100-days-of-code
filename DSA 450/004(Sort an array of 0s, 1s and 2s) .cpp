#include<iostream>
using namespace std;

void sortArray(int [], int);

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

    sortArray(array, size);

    for(int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

void sortArray(int array[], int size)
{
    int zeroCount = 0, oneCount = 0, twoCount = 0, i;
    for(i = 0; i < size; i++)
    {
        if(0 == array[i])
        {
            zeroCount++;
        }
        else if(1 == array[i])
        {
            oneCount++;
        }
        else if(2 == array[i])
        {
            twoCount++;
        }
    }

    cout << zeroCount << " " << oneCount << " " << twoCount << endl;

    for(i = 0; i < zeroCount; i++)
    {
        array[i] = 0;
    }
    for(i = zeroCount; i < zeroCount+oneCount; i++)
    {
        array[i] = 1;
    }
    for(i = oneCount+zeroCount;i < size; i++)
    {
        array[i] = 2;
    }
}





















