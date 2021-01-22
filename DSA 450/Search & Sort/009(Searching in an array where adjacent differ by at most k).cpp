#include<iostream>
using namespace std;

int findFirstOccuOfX(int a[], int size, int x);

int main()
{
    int size, k, x;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "Enter the value of k = ";
    cin >> k;
    cout << "Enter the value of x = ";
    cin >> x;
    cout << findFirstOccuOfX(arr, size, x);
}

int findFirstOccuOfX(int a[], int size, int x)
{

    // your code here
    for(int i = 0; i < size; i++)
    {
        if(x == a[i])
            return i;
    }
}

