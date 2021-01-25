#include<iostream>
using namespace std;
int main()
{
    int arr[50];
    int i,pos,siz,element;
    cout<<"Enter the size of array = ";
    cin>>siz;

    for(i=0;i<siz;i++)
    {
        cout<<"Enter the number = ";
        cin>>arr[i];
    }
    cout<<"Enter the position = ";
    cin>>pos;
    for(i=pos;i<siz;i++)
    {
        arr[i]=arr[i+1];
    }

    for(i=0;i<siz;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}

