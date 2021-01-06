#include<iostream>
using namespace std;

int findMedian(int [], int [], int, int);

int main()
{
    int size1, size2, i;
    cout << "Enter the size of first array = ";
    cin >> size1;

    int *array1 = new int[size1];
    for(i = 0; i < size1; i++)
    {
        cin >> array1[i];
    }

    cout << "Enter the size of second array = ";
    cin >> size2;

    int *array2 = new int[size2];
    for(i = 0; i < size2; i++)
    {
        cin >> array2[i];
    }

    cout << "The median is " << findMedian(array1, array2, size1, size2);
}

int findMedian(int array1[], int array2[], int n, int m)
{
    int temp, i, median;
    for(i = 0; i < n; i++)
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

    for(i = 0; i < m; i++)
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
    int size = n+m, a, b;
    if(size % 2 == 0)
    {
        if(size/2 < n)
        {
            a = array1[size/2];
            b = array1[(size/2)-1];
        }
        else
        {
            a = array2[(size/2)-n];
            b = array2[((size/2)-1)-n];
        }
        median = a+b;
        median = median/2;
    }
    else
    {
        if(size/2 < n)
        {
            median = array1[size/2];
        }
        else
        {
            median = array2[(size/2)-n];
        }
    }
    return median;
}

