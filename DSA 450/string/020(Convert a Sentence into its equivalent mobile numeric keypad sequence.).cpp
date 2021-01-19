#include<iostream>
using namespace std;

void printSequence(char *str, int size);

int main()
{
    char str[] = "GEEKSFORGEEKS";
    printSequence(str, );
}

void printSequence(char *str, int size)
{
    int arr[] = {2,22,222,3,33,333,4,44,444,5,55,555,6,66,666,7,77,777,7777,8,88,888,9,99,999,9999};
    int temp;
    for(int i = 0; i < size; i++)
    {
        temp = str[i];
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            cout << arr[temp-97];
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            //output += arr[temp-65];
            cout << arr[temp-65];
        }
    }
    return;
}
