#include<iostream>
using namespace std;
int main()
{
    int n,re,p=1,num;

    cout<<"Enter the Number = ";
    cin>>n;
    while(n!=0)
    {
        re=n%10;
        num=n/10;
        p=p*re;
        n=num;
    }
    cout<<"The product of digit = "<<p;
    return 0;
}
