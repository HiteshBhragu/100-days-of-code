#include<iostream>
using namespace std;
int find_unique_number(int*, int*, int);

int main()
{
    int arr[50];
    int unique[50], i, k, size;
    cout << "Enter the size of an array = ";
    cin >> size;
    for(i=0; i<size; i++)
    {
        cout << "Enter number = ";
        cin >> arr[i];
    }

    k = find_unique_number(arr, unique, size);

    cout << "Original array = ";

    for(i=0; i<size; i++)
    {
        cout << arr[i] << "  ";
    }

    cout << "\nUnique array = ";

    for(i=0; i<k; i++)
    {
        cout << unique[i] << "  ";
    }
    return 0;
}

int find_unique_number(int* parr, int* puni, int size)
{
    int i, j, k = 0, count = 0;

    for(i=0; i<size; i++)
    {
        count = 0;
        for(j=0; j<size; j++)
        {
            if(parr[i] == puni[j])
            {
                count++;
            }
        }

        if(count == 0)
        {
            puni[k] = parr[i];
            k++;
        }
    }

    return k;
}
