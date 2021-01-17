#include<iostream>
using namespace std;
int count_string_length(char*);
int main()
{
    char demo[15]="OKAY";
    int c;
    c=count_string_length(demo);
    cout<<c;
}

int count_string_length(char* ptr)
{
    int c=0;
    while(*ptr!='\0')
    {
        ptr++;
        c++;
    }
    return c;
}

