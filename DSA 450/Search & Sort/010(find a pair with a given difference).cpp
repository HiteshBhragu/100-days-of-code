
#include<iostream>
using namespace std;

int findPairDiff(int a[], int size, int k);

int main()
{
    int size, k;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "Enter the diffrence = ";
    cin >> k;
    cout << findPairDiff(arr, size, k);
}
int findPairDiff(int arr[], int size, int k)
{
    for(int i = 0; i  < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(arr[i] - arr[j] == k)
                return 1;
        }
    }
    return -1;
}
