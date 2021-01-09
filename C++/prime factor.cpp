#include<iostream>
using namespace std;
int main()
{
    int n,i,f=1;

    cout<<"Enter the number = ";
    cin>>n;

    for(i=1;i<=n-1;i++)
    {
        if(f%i==0)
        cout<<f<<" ";
    }
        for(i=2;i<=f;i++)
    {
        if(f%i==0)
        break;
    }
    if(i==f)
    {
        cout<<"Prime number."<<f;
    }
    else
    {
        cout<<"Not prime number.";
    }


    return 0;
}
