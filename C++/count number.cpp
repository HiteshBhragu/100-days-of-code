#include<iostream>
using namespace std;
int main()
{
    int c=0,n;
    cout<<"Ente the number = ";
    cin>>n;

    while(n!=0)
    {
        n/=10;
        ++c;
    }
    cout<<"NUmber of digit "<<c;
    return 0;
}
