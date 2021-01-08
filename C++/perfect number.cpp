#include<iostream>
using namespace std;
int main()
{
    int n,i,s=0,temp;

    cout<<"Enter the number = ";
    cin>>n;
    temp=n;
    for(i=1;i<=n-1;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
        }
        if(temp==s)
        {
            cout<<"Perfet number.";
        }
        else
        {
            cout<<"Not perfect number.";
        }

    return 0;
}
