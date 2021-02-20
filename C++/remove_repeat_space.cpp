#include <iostream>
using namespace std;
int strlen(char*);
void remove_repeat_space(char*);
int main()
{
    char str[50]="my     name   is   hitesh.          ";
    cout<<str<<endl;
    int c;

    remove_repeat_space(str);

    cout<<str;
}

void remove_repeat_space(char* str)
{
    int i,c,j;
    c = strlen(str);
    for(i=0;i<c;i++)
    {
        if(str[i]==32)
        {
            if(str[i]==str[i-1])
            {
                for(j=i;j<c;j++)
                {
                    str[j] = str[j+1];
                    i--;
                }
            }
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

