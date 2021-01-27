#include<iostream>
using namespace std;
int main()
#define SIZE_OF_ARRAY 5

{
    int arr[SIZE_OF_ARRAY];
    int k,n=0;

    for(k=0;k<SIZE_OF_ARRAY;k++)
    {
        cout<<"Enter the number = ";
        cin>>arr[k];

        if(arr[k]<0)
        {
            n++;
        }
    }

    cout<<"The negative count = "<<n;
    return 0;
}

