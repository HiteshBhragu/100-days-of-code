#include<iostream>
using namespace std;
int main()
#define SIZE_OF_ARRAY 5

{
    int arr[SIZE_OF_ARRAY];
    int k;

    for(k=0;k<SIZE_OF_ARRAY;k++)
    {
        cout<<"Enter the number = ";
        cin>>arr[k];
    }

    cout<<"Enter the kth = ";
    cin>>k;
    cout<<"The kth number is = "<<arr[k-1];

    return 0;
}
