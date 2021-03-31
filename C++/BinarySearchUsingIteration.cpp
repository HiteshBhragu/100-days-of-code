#include<iostream>
using namespace std;
int BinarySearch(int *ptr, int item, int siz);

int main()
{
    int arr[10];
    int item, i, siz;
    cout << "Enter the size of array = ";
    cin >> siz;
    for(i=0; i<siz; i++)
    {
        cout << "Enter the "<< i+1 << " element = ";
        cin >> arr[i];
    }
    cout << "Enter the number = ";
    cin >> item;
    int posi = BinarySearch(arr, item, siz);
    if(posi == 0)
    {
        cout << "not found.";
    }
    else
    {
        cout << "Found at index = " << posi;
    }
}

int BinarySearch(int *ptr, int itemToSearch, int siz)
{
    int l = 0, u = siz - 1;
    int mid ;
    while(l <= u)
    {
        mid = (l + u)/2;
        if(itemToSearch == ptr[mid])
        {
            return mid;
        }
        else if(itemToSearch < ptr[mid])
        {
            u = mid - 1;
        }
        else if(itemToSearch > ptr[mid])
        {
            l = mid + 1;
        }
    }
    return 0;
}
