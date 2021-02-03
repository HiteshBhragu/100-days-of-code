#include<iostream>
using namespace std;
int main()
#define MAX_arr 5
{
    int arr[MAX_arr];
    int i,s=0;
    for(i=0;i<MAX_arr;i++)
    {
        cout<<"Enter the numbers = ";
        cin>>arr[i];
    }
    for(i=0;i<MAX_arr;i++)
    {
        s=s+arr[i];
    }
    cout<<"\nThe sum  is = "<<s;

    return 0;
}

