#include <iostream>
using namespace std;
int strlen(char*);
void remove_all_char(char*, char*);
int main()
{
    char str[30]="calculation",n;

    cout<<str<<endl;
    cout<<"Enter the char = ";
    cin>>n;

    remove_all_char(str,&n);
    cout<<str;
}

void remove_all_char(char* str, char* n)
{
    int i,c,j;
    c = strlen(str);
    for(i=0;i<c;i++)
    {
        if(str[i]==*n)
        {
            for(j=i;j<c;j++)
            {
                str[j] = str[j+1];
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

