#include <iostream>
using namespace std;
int strlen(char*);
int count_word(char*);
int main()
{
    char str[50]="hitesh @ # $ % 165";
    int c;
    cout<<str<<endl;

    c = count_word(str);

    cout<<c;
}
int count_word(char* str)
{
    int j=0;
    while(*str)
    {
        if(*str>='a'&&*str<='z'||*str>='A'&&*str<='Z')
        {}
        else if(*str>='0'&&*str<='9')
        {}
        else if(*str==32)
        {}
        else
        {
            j++;
        }
        str++;
    }

    return j;
}
