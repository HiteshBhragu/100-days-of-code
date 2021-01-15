#include <iostream>
using namespace std;
int count_letters(char*);
int main()
{
    char str[30]="Sdbct";
    int c;
    c = count_letters(str);
    cout<<c;
}

int count_letters(char* str)
{
    int c=0;

    while(*str)
    {
        if(*str>='a'&&*str<='z'||*str>='A'&&*str<='Z')
        {
            c++;
        }
        str++;
    }
    return c;
}
