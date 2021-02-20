#include <iostream>
using namespace std;
void replace_first_char(char*, char*, char*);
int main()
{
    char str[30]="calculation",n,r;

    cout<<str<<endl;
    cout<<"Enter the char = ";
    cin>>n;
    cout<<"Replace with = ";
    cin>>r;

    replace_first_char(str,&n,&r);
    cout<<str;
}

void replace_first_char(char* str, char* n, char* r)
{
    int i=0;
    while(*str)
    {
        if(*str==*n)
        {
            *str=*r;
            i++;
        }
        str++;

        if(i==1)
        {
            break;
        }
    }
    return;
}
