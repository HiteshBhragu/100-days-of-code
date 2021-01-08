#include<iostream>
using namespace std;
int main()
{
    int n,s,r,x;

    cout<<"Enter the number = ";
    cin>>n;
    s=0;
    x=n;

    while(x!=0)
    {
        r=x%10;
        s=s+r*r*r;
        x=x/10;
    }
    if(s==n)
    {
        cout<<"Armstrong number.";
    }
    else
    {
        cout<<"Not a Armstrong number.";
    }
    return 0;
}
