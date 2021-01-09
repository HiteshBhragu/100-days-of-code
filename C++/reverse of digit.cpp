#include<iostream>
using namespace std;
int main()
{
    int i,rev=0,r,n,temp;
    cout<<"Enter the number = ";
    cin>>n;

    while(n!=0)
    {
        r=n%10;
        rev=r+rev*10;
        n=n/10;
    }
    cout<<"The reverse of digite = "<<rev;
    return 0;
}
