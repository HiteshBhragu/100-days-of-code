#include<iostream>
using namespace std;
int main()
{
    int arr[50];
    int i,siz,j,k;
    cout<<"Enter the size of array = ";
    cin>>siz;

    for(i=0;i<siz;i++)
    {
        cout<<"Enter the number = ";
        cin>>arr[i];
    }
    cout<<"Enter the kth number = ";
    cin>>k;

    for(i=0;i<siz;i++)
    {
        if(arr[i] == k)
        {
            for(j=i; j<siz; j++)
            {
                arr[j] = arr[j+1];
            }
        }
    }
    for(i=0;i<siz-1;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}