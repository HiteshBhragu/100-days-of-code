#include <iostream>
using namespace std;
bool check_palindrom(char*);
int count_lenght(char*);
int main()
{
    //char str[12]="ma'am";
    char str[12]="Ma'am";
    //char str[12]="Ma+-+am";
    //char str[12]="M a ' a m";
    //char str[12]="ma'aM";
    if(check_palindrom(str))
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not palindrome";
    }
}

bool check_palindrom(char* ptr)
{
    int i, c;
    c=count_lenght(ptr);
    for(i=0;i<c-1;i++)
    {
        if(*ptr>='a'&&*ptr<='z'&&*ptr>='A'&&*ptr<='Z')
        {
            if(ptr[i]==ptr[c-i-1])
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}
int count_lenght(char* ptr)
{
    int c=0;
    while(*ptr!=0)
    {
        ptr++;
        c++;
    }

    return c;
}
