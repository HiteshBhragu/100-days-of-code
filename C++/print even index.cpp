#include<iostream>
using namespace std;
int main()
#define SIZE_OF_ARRAY 20

{
    int arr[SIZE_OF_ARRAY];
    int k;

    for(k=0;k<SIZE_OF_ARRAY;k++)
    {
        cout<<"Enter the number = ";
        cin>>arr[k];
    }
    for(k=0;k<SIZE_OF_ARRAY;k++)
    {
        if(k%2==0)
        {
            cout<<"The even numbers = "<<arr[k]<<endl;
        }
    }

    return 0;
}


