#include<iostream>
using namespace std;
int main()
{
    int x,n,i,s=0;

    cout<<"Enter the number = ";
    cin>>n;
    for(x=1;x<=n-1;x++)
    {

    for(i=2;i<=n-1;i++)
    {
        if(x%i==0)
        break;
    }
    if(i==x)
    {
        s=s+x;
    }
    }
    cout<<"The sum of prime number = "<<s;
    return 0;
}
