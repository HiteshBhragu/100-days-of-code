#include <iostream>
using namespace std;
int count_lenght(char*);
bool strcmp(char*,char*);
int main()
{
    char str1[30];
    char str2[30];
    cout<<"Enter the first string = ";
    cin>>(str1);
    cout<<"Enter the second string = ";
    cin>>(str2);
    if(strcmp(str1,str2))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}

bool strcmp(char* str1,char* str2)
{
    int c,i,j=0,nc;
    nc = count_lenght(str2);
    c = count_lenght(str1);
    for(i=0;i<c;i++)
    {
        if(str1[i] == str2[i])
        {
            j++;
        }
    }
    if(c == j && c == nc)
    {
        return true;
    }
    else
    {
        return false;
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
