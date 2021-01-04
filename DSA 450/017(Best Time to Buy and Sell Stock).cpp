#include<iostream>
using namespace std;

int findMaxProfit(int [], int);

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
    cout << findMaxProfit(array, size);
}

int findMaxProfit(int array[], int size)
{
    int profit = 0;
    for(int i = 0; i < size-1; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(array[i] < array[j])
            {
                if(array[j] - array[i] > profit)
                {
                    profit = array[j] - array[i];
                }
            }
        }
    }
    return profit;
}



