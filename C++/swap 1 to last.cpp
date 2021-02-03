#include<iostream>
using namespace std;
int main()
#define MAX_arr 5
{
    int arr[MAX_arr];
    int i,s=0,f,l;
    for(i=0;i<MAX_arr;i++)
    {
        cout<<"Enter the numbers = ";
        cin>>arr[i];
    }
    f=arr[0];
    l=arr[4];
    s=f;
    f=l;
    l=s;
    cout<<f;
    for(i=1;i<4;i++)
    {
        cout<<arr[i];
    }
    cout<<l;
    return 0;
}
