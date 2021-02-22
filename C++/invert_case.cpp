#include <iostream>
using namespace std;
void invert_case(char*);
int main()
{
    char str[15]="Programming";

    invert_case(str);

    cout<<str;
}

void invert_case(char* ptr)
{
    while(*ptr!='\0')
    {
        if(*ptr>='a'&&*ptr<='z')
        {
            *ptr=*ptr-32;
        }
        else if(*ptr>='A'&&*ptr<='Z')
        {
            *ptr=*ptr+32;
        }
        ptr++;
    }
    return;
}

