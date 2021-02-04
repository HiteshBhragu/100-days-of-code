#include <iostream>
using namespace std;
void convert_upr_to_lower_case(char*);
int main()
{
    char str[15]="OKAY";
    int i=0;
    convert_upr_to_lower_case(str);
    while(str[i]!='\0')
    {
        cout<<str[i];
        i++;
    }
}

void convert_upr_to_lower_case(char* ptr)
{
    while(*ptr!='\0')
    {
        if(*ptr>='A'&&*ptr<='Z')
        {
            *ptr=*ptr+32;
        }
        ptr++;
    }
    return;
}

