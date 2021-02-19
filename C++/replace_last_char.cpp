#include <iostream>
using namespace std;
int strlen(char*);
void replace_last_char(char*, char*,char*);
int main()
{
    char str[30]="calculation",n,r;

    cout<<str<<endl;
    cout<<"Enter the char = ";
    cin>>n;
    cout<<"Replace with = ";
    cin>>r;
    replace_last_char(str,&n,&r);
    cout<<str;
}

void replace_last_char(char* str, char* n,char* r)
{
    int i,c,k=0;

    c = strlen(str);

    for(i=c;i>0;i--)
    {
        if(str[i]==*n)
        {
            str[i]=*r;
            k++;
        }
        if(k==1)
        {
            break;
        }
    }

    return;
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
