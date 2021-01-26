#include<iostream>
using namespace std;
int main()
{
    int k,i,flag=0,arr[50],siz;
    
    cout<<"Enter the size of array = ";
    cin>>siz;
    for(k=0;k<siz;k++)
    {
        cout<<"Enter the number = ";
        cin>>arr[k];
    }

    cout<<"Enter the number to search index = ";
    cin>>k;
    for(i=0;i<siz;i++)
    {
        if(arr[i]==k)
        {
            cout<<"First ccurance of number = "<<i+1;
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Nmuber is not found.";
    }

    return 0;
}
