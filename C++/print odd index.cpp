#include<iostream>
using namespace std;
int main()
#define SIZE_OF_ARRAY 20

{
    int arr[SIZE_OF_ARRAY];
    int k,e=0,o=0;

    for(k=0;k<SIZE_OF_ARRAY;k++)
    {
        cout<<"Enter the number = ";
        cin>>arr[k];
    }
    for(k=0;k<SIZE_OF_ARRAY;k++)
    {
        if(k%2!=0)
        {
            cout<<"The odd numbers = "<<arr[k]<<endl;
        }
    }

    return 0;
}

