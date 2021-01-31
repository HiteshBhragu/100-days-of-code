#include<iostream>
using namespace std;
int main()
{
    int arr[5]={14,5,7,12,32};
    int even[5];
    int odd[5];
    int i,c=0,o=0;

    for(i=0; i<5; i++)
    {
        if(arr[i]%2==0)
        {
            even[c]=arr[i];
            c++;
        }
        else if(arr[i]%2!=0)
        {
            odd[o]=arr[i];
            o++;
        }
    }
    for(i=0;i<c;i++)
    {
        cout<<"Even numbers = "<<even[i]<<endl;
    }
    for(i=0;i<o;i++)
    {
        cout<<"Odd numbers = "<<odd[i]<<endl;
    }
    return 0;
}
