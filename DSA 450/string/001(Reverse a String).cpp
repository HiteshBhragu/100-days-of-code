#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of string = ";
    cin >> size;
    char str[size];
    cin >> str;

    char temp;
    for(int i = 0; i < size/2; i++)
    {
        temp = str[i];
        str[i] = str[size-i-1];
        str[size-i-1] = temp;
    }

    cout << str;
}
