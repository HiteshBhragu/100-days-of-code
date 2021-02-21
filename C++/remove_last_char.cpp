#include <iostream>
using namespace std;
int strlen(char*);
void remove_last_char(char*, char*);
int main()
{
    char str[30]="calculation",n;

    cout<<str<<endl;
    cout<<"Enter the char = ";
    cin>>n;

    remove_last_char(str,&n);
    cout<<str;
}

void remove_last_char(char* str, char* n)
{
    int i,c,j,k=0;

    c = strlen(str);

    for(i=c;i>0;i--)
    {
        if(str[i]==*n)
        {
            for(j=i;j<c;j++)
            {
                str[j]=str[j+1];
            }
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
