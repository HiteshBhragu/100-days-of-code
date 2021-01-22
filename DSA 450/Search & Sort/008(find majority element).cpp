#include<iostream>
using namespace std;

int majorityElement(int a[], int size);

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++)
        cin >> arr[i];
    cout << majorityElement(arr, size);
}
int majorityElement(int a[], int size)
{

    // your code here
    int i, max = a[0];
    for(i = 1; i < max; i++)
    {
        if(max < a[i])
            max = a[i];
    }
    int *occu = new int[max];
    for(i = 0; i < max; i++)
    {
        occu[i] = 0;
    }
    for(i = 0; i < size; i++)
    {
        occu[a[i]]++;
    }

    int majorityElem, max2 = occu[0];
    for(i = 1; i <= max; i++)
    {
        if(max2 < occu[i]){
            max2 = occu[i];
            majorityElem = i;
        }
    }
    if(size % 2 == 0){
        if(majorityElem == size/2)
            return majorityElem;
        else
            return -1;
    }
    else{
        if(majorityElem-1 == size/2)
            return majorityElem;
        else
            return -1;
    }
}
