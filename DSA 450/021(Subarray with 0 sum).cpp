
#include<iostream>
using namespace std;

bool subArrayExists(int [], int);

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

    if(subArrayExists(array, size))
        cout << "Yes";
    else
        cout << "No";

}

bool subArrayExists(int array[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum = 0;
        for(int j = i; j < size; j++)
        {
            if(0 == array[i])
                return true;
            sum += array[j];
            if(0 == sum)
                return true;
        }
    }
    return false;
}

