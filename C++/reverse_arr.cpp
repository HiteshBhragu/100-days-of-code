#include<iostream>
using namespace std;
void reverse_arr(int* arr,int);
int main()
{
    int arr[50],i,siz;
    cout<<"Enter the size of array = ";
    cin>>siz;
    for(i=0;i<siz;i++)
    {
        cout<<"Enter the number = ";
        cin>>arr[i];
    }
    reverse_arr(arr, siz);
    for(i=0; i<siz; i++)
    {
        cout<<arr[i]<<endl;
    }
}

void reverse_arr(int* arr, int siz)
{
    int i,temp = 0;

    for(i=0; i<siz/2; i++)
    {
        temp = arr[siz-i-1];
        arr[siz-i-1] = arr[i];
        arr[i] = temp;
    }
    return ;
}
