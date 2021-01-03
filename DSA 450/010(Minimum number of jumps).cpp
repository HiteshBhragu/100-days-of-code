#include<iostream>
using namespace std;

int minJump(int [], int);

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

    cout << minJump(array, size);
}

int minJump(int array[], int size)
{
    int count = 1;
    for(int i = 1; i < size; i++)
    {
        if(i >= size-1)
        {
            break;
        }
        i = array[i];
        count++;
    }
    return count;
}

