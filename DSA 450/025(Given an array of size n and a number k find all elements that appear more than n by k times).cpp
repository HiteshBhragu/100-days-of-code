#include<iostream>
using namespace std;

void findMoreThanNbyK(int [], int, int);

int main()
{
    int size , k;
    cout << "Enter the size of array = ";
    cin >> size;

    cout << "Enter the K = ";
    cin >> k;

    int *array = new int[size];
    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    findMoreThanNbyK(array, size, k);
}

void findMoreThanNbyK(int array[], int size, int k)
{
    int temp, i, d = size/k;
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
    int count = 1, totalCount = 0;
    for(i = 0; i < size-1; i++)
    {

        if(array[i] == array[i+1])
        {
            count++;
        }else
        {
            if(d < count)
            {
                totalCount++;
                cout << array[i] << " ";
            }
            count = 1;
        }
    }
    if(d < count)
        cout << array[i-1];
    return;
}
