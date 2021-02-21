#include <iostream>
using namespace std;
void convert_lower_to_upr_case(char*);
int main()
{
    char str[15]="okay";
    int i=0;
    convert_lower_to_upr_case(str);
    while(str[i]!='\0')
    {
        cout<<str[i];
        i++;
    }
}

void convert_lower_to_upr_case(char* ptr)
{
    while(*ptr!='\0')
    {
        if(*ptr>='a'&&*ptr<='z')
        {
            *ptr=*ptr-32;
        }
        ptr++;
    }
    return;
}
