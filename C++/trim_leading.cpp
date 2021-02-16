#include<iostream>
using namespace std;
int strlen(char*);
void trim_leading(char*);
int main()
{
    char str[30] = "               Aim";
    cout<<str<<endl;

    trim_leading(str);
    cout<<str;
}

void trim_leading(char* str)
{
    int i,j=0,c,k;
    c = strlen(str);

    for(i=0;i<c;i++)
    {
        if(str[i]==32)
        {
            j++;
        }
    }
    for(k=0;k<c;k++)
    {
        str[k] = str[k+j];
    }
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
