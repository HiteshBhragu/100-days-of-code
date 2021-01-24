#include<iostream>
using namespace std;
int main()

#define SIZE_OF_ARRAY 5

{
    int arr[SIZE_OF_ARRAY],cpy[SIZE_OF_ARRAY];
    int i;

    for(i=0;i<SIZE_OF_ARRAY;i++)
    {
        cout<<" Enter the number = ";
        cin>>arr[i];
    }

    for(i=0;i<SIZE_OF_ARRAY;i++)
    {
        cpy[i]=arr[i];

        cout<<cpy[i]<<"\n";
    }

    return 0;
}

