#include <iostream>
using namespace std;
void concat_char_array(char*,char*,char*);
int main()
{
    char str1[8]="Hitesh ";
    char str2[8]="Bhragu";
    char str3[16];

    concat_char_array(str1,str2,str3);
    cout<<str3;
}

void concat_char_array(char* str1,char* str2,char* str3)
{
    int i=0, c=0;

    while(str1[i]!='\0')
    {
        str3[i]=str1[i];
        i++;
    }
    while(str2[c]!='\0')
    {
        str3[i]=str2[c];
        c++;
        i++;
    }
    str3[i]='\0';
    return;
}
