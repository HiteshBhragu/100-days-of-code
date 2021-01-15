#include <iostream>
using namespace std;
int count_all_char(char*);
int main()
{
    char str[30]="Sdbct";
    int c;
    c = count_all_char(str);
    cout<<c;
}

int count_all_char(char* str)
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
