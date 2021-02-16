#include<iostream>
using namespace std;
int strlen(char*);
void trim(char*);
int main()
{
    char str[30] = "             AIM           ";
    cout<<str<<endl;

    trim(str);
    cout<<str;
}

void trim(char* str)
{
    int i,j=0,y,x=0,z,c,c1;

    c = strlen(str);

    for(y=0;y<c;y++)
    {
        if(str[y]==32)
        {
            x++;
        }
        else if(str[y]!=32)
        {
            break;
        }
    }
    for(z=0;z<c;z++)
    {
        str[z] = str[z+x];
    }

    c1 = strlen(str);
    for(i=c1-1;i>0;i--)
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
