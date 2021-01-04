#include<iostream>
using namespace std;

void mergeArray(int [], int[], int, int);

int main()
{
    int n = 0, m = 0;
    cout << "Enter the size of first array = ";
    cin >> n;
    cout << "Enter the size of second array = ";
    cin >> m;
    int *array1 = new int[n];
    int *array2 = new int[m];
    for(int i = 0; i < n; i++)
    {
        cin >> array1[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> array2[i];
    }

    mergeArray(array1, array2, n, m);

    for(int i = 0; i < n; i++)
    {
        cout << array1[i] << " ";
    }
    for(int i = 0; i < m; i++)
    {
        cout << array2[i] << " ";
    }
}

void mergeArray(int array1[], int array2[], int n, int m)
{
    int temp;
    for(int i = 0; i < n; i++)
    {
        //temp = array1[i];
        for(int j = 0; j < m; j++)
        {
            if(array1[i] > array2[j])
            {
                temp = array1[i];
                array1[i] = array2[j];
                array2[j] = temp;
            }
        }
    }

    for(int i = 0; i < m; i++)
    {
        temp = array2[i];
        for(int j = i+1; j < m; j++)
        {
            if(temp > array2[j])
            {
                array2[i] = array2[j];
                array2[j] = temp;
                temp = array2[i];
            }
        }
    }
    return;
}

