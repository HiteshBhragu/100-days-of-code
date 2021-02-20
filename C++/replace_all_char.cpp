#include <iostream>
using namespace std;
int strlen(char*);
void replace_all_char(char*, char*, char*);
int main()
{
    char str[30]="calculation",n,r;

    cout<<str<<endl;
    cout<<"Enter the char = ";
    cin>>n;
    cout<<"Replace with = ";
    cin>>r;

    replace_all_char(str,&n,&r);
    cout<<str;
}

void replace_all_char(char* str, char* n, char* r)
{
    int i,c;
    c = strlen(str);
    for(i=0;i<c;i++)
    {
        if(str[i]==*n)
        {
            str[i]=*r;
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
