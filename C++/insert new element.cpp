
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
    cout<<"Enter the new number = ";
    cin>>element;
    cout<<"Enter the position = ";
    cin>>pos;
    for(i=siz;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    siz++;

    arr[pos-1]=element;
    for(i=0;i<siz;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
