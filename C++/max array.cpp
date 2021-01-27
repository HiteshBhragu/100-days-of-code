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
        n=arr[0];
    }

    for(i=1; i<5; i++)

    {
        if(n<arr[i])
        {
            n=arr[i];
        }
    }

    cout<<n<<" is maximum number";
    return 0;
}
