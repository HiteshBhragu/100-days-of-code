#include <iostream>
using namespace std;
int count_digit(char*);
int main()
{
    char str[30]="Program 002";
    int c;
    c = count_digit(str);
    cout<<c;
}

int count_digit(char* str)
{
    int c=0;

    while(*str)
    {
        if(*str>='0'&&*str<='9')
        {
            c++;
        }
        str++;
    }
    return c;
}

