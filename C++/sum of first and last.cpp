#include<iostream>
using namespace std;
int main()
{
    int l,f=1,n,s;

    cout<<"Enetr the number = ";
    cin>>n;
    l=n%10;
    while(n!=0)
    {
        f=n%10;
        n=n/10;
    }
    s=l+f;
    cout<<"The sum of first and last digit is = "<<s;
    return 0;
}


