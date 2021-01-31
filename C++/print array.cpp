#include<iostream>
using namespace std;
int main()
#define MAX_arr 5
{
    int arr[MAX_arr];
    int i;
    for(i=0;i<MAX_arr;i++)
    {
        cout<<"Enter the numbers = ";
        cin>>arr[i];
    }
    for(i=0;i<MAX_arr;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
