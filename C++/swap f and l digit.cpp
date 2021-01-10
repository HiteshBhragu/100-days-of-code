#include<iostream>
using namespace std;
int main()
{
    int s,l,f=1,n;

    cout<<"Enetr the number = ";
    cin>>n;
    l=n%10;

    while(n!=0)
    {
        f=n%10;
        n=n/10;
    }
    s=l;
    l=f;
    f=s;
    cout<<"The last number is = "<<l<<endl;
    cout<<"The fist number is = "<<f;
    return 0;
}
