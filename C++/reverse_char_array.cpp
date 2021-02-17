#include <iostream>
using namespace std;
void reverse_str(char*);
int count_lenght(char*);
int main()
{
    char str[20]="okay";
    //char str[20]="Okay";
    //char str[20]="o k a y";
    //char str[20]="o++k a--y";
    int i=0,c;
    reverse_str(str);
    while(str[i]!='\0')
    {
        cout<<str[i];
        i++;
    }
}

void reverse_str(char* ptr)
{
    int i,c;
    char temp;
    c=count_lenght(ptr);
    for(i=0;i<c/2;i++)
    {
        temp=ptr[i];
        ptr[i]=ptr[c-i-1];
        ptr[c-i-1]=temp;
    }
}

int count_lenght(char* ptr)
{
    int c=0;
    while(*ptr!=0)
    {
        ptr++;
        c++;
    }
    return c;
}
