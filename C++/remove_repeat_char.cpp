#include <iostream>
using namespace std;
int strlen(char*);
void remove_repeat_char(char*);
int main()
{
    char str[30]="ababa",n,r;
    cout<<str<<endl;

    remove_repeat_char(str);
    cout<<str;
}

void remove_repeat_char(char* str)
{
    int i,j,k,c;
    c = strlen(str);
    for(i=0;i<c;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if(str[i]==str[j])
            {
                for(k=j;k<c;k++)
                {
                    str[k]=str[k+1];
                }
            }
        }
    }
    return;
}

int strlen(char* ptr)
{
    int c=0;
    while(*ptr!='\0')
    {
        ptr++;
        c++;
    }
    return c;
}
