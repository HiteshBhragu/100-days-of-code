#include<iostream>
using namespace std;

bool isPalindrome(char str[], int);

int main()
{
    int size;
    cout << "Enter the size of string = ";
    cin >> size;
    char str[size];
    cin >> str;

    if(isPalindrome(str, size))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}

bool isPalindrome(char str[], int size)
{
    for(int i = 0; i < size/2; i++)
    {
        if(str[i] != str[size-i-1])
            return false;
    }
    return true;
}
