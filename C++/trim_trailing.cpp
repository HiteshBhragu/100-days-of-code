#include<iostream>
using namespace std;
int strlen(char*);
void trim_trailing(char*);
int main()
{
    char str[30] = "AIM           ";
    cout<<str<<endl;

    trim_trailing(str);
    cout<<str;
}

void trim_trailing(char* str)
{
    int i,j=0,c;

    c = strlen(str);

    for(i=c-1;i>0;i--)
    {
        if(str[i]!=32)
        {
            break;
        }
    }

    str[i+1] = '\0';
}

int strlen(char* ptr)
{
    int c=0;
    while(*ptr)
    {
        ptr++;
        c++;
    }
    return c;
}
