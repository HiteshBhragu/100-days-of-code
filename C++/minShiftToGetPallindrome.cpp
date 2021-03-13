#include <iostream>
using namespace std;
bool isPalindrom(char*);
int count_lenght(char*);
int minShiftToGetPallindrome(char *str);
int main()
{
    //char str[12]="ma'am";
    //char str[12]="";
    char str[12]="maaam";
    //char str[12]="M a ' a m";
    //char str[12]="ma'aM";
    if(isPalindrom(str))
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not palindrome";
    }
}

bool isPalindrom(char* ptr)
{
    int i, c, count = 0;
    c=count_lenght(ptr);
    for(i = 0; i < c/2; i++)
    {
            if(ptr[i]!=ptr[c-i-1])
            {
                return false;
            }
    }
    return true;
}
int minShiftToGetPallindrome(char *str)
{
    if(isPalindrom(str))
    {
        return
    }
}

int count_lenght(char* ptr)
{
    int c = 0;
    while(*ptr != '\0')
    {
        ptr++;
        c++;
    }

    return c;
}
