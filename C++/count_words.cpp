#include <iostream>
using namespace std;
void trim(char*);
int strlen(char*);
int count_word(char*);
void remove_repeat_space(char*);
int main()
{
    char str[50]="my     name   is   hitesh.          ";
    int c;
    cout<<str<<endl;

    c = count_word(str);

    cout<<c+1;
}
int count_word(char* str)
{
    int i,c,j=0;

    remove_repeat_space(str);
    c = strlen(str);
    for(i=0;i<c;i++)
    {
        if(str[i]==32)
        {
            j++;
        }
    }
    return j;
}

void remove_repeat_space(char* str)
{
    int i,c,j;
    c = strlen(str);
    trim(str);
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

void trim(char* str)
{
    int i,j=0,y,x=0,z,c,c1;

    c = strlen(str);

    for(y=0;y<c;y++)
    {
        if(str[y]==32)
        {
            x++;
        }
        else if(str[y]!=32)
        {
            break;
        }
    }
    for(z=0;z<c;z++)
    {
        str[z] = str[z+x];
    }

    c1 = strlen(str);
    for(i=c1-1;i>0;i--)
    {
        if(str[i]!=32)
        {
            break;
        }
    }

    str[i+1] = '\0';
}

