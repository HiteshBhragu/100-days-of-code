#include<iostream>
using namespace std;
int main()
{
    int n,i;

    cout<<"Enter the number = ";
    cin>>n;

    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        break;
    }
    if(i==n)
    {
        cout<<"Prime number.";
    }
    else
    {
        cout<<"Not prime number.";
    }

    return 0;
}
