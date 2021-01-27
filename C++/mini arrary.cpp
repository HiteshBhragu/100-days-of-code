#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int i,n;

    for(i=0; i<5; i++)
    {
        cout<<"Enter the number = ";
        cin>>arr[i];
    }

    for(i=0; i<5; i++)

    {
        if(n>arr[i])
        {
            n=arr[i];
        }
    }

    cout<<n<<" is minimum number.";
    return 0;
}
