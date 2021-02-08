#include <iostream>
using namespace std;
void cpy_char_array(char*, char*);
int main()
{
    char str[15]="Hitesh bhragu";
    char cpy[15];
    cpy_char_array(cpy,str);

    cout<<cpy;
}

void cpy_char_array(char* cpy, char* ptr)
{
    int i=0,j=0;

    while(ptr[i]!='\0')
    {
        if(ptr[i]>=65&&ptr[i]<=122)
        {
            cpy[i]=ptr[i];
        }
        i++;

        if(ptr[j]==32)
        {
            cpy[j]=32;
        }
        j++;
    }
    cpy[i]='\0';
    return;
}
