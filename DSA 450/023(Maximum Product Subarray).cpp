#include<iostream>
using namespace std;

long long findMaxProduct(int [], int);

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

    cout << findMaxProduct(array, size);


}

long long  findMaxProduct(int array[], int size)
{
    int prod = 0, temp = 1;
    for(int i = 0; i < size; i++)
    {
        temp = 1;
        for(int j = i; j < size; j++)
        {
            temp *= array[j];
            if(prod < temp)
                prod = temp;

        }
    }
    return prod;
}

