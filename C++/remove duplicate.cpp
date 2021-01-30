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

    for(i=0;i<siz;i++)
    {
        for(j=i+1;j<siz;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<siz;k++)
                {
                    arr[k]=arr[k+1];
                }
                siz--;
                j--;
            }
        }
    }
    for(i=0;i<siz;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
