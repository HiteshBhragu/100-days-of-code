#include<iostream>
using namespace std;
bool check_palin(int* arr,int);
int main()
{
    int arr[50],i,siz;
    cout<<"Enter the size of array = ";
    cin>>siz;
    for(i=0;i<siz;i++)
    {
        cout<<"Enter the number = ";
        cin>>arr[i];
    }
    if(check_palin(arr, siz))
    {
        cout<<"Palindrome.";
    }
    else
    {
        cout<<"Not Palindrome.";
    }

}

bool check_palin(int* arr, int siz)
{
    int i,count = 0;

    for(i=0; i<siz/2; i++)
    {
        if(arr[i] == arr[siz-i-1])
        {
            count++;
        }
    }

    if(count == siz/2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
