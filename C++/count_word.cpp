#include <iostream>
using namespace std;
int strlen(char*);
int count_word(char*, char*);
int main()
{
    char str[50]="come first take first", n[10];
    int c;
    cout<<str<<endl;
    cout<<"Enter the char = ";
    cin>>n;

    c = count_word(str, n);

    cout<<c;
}

int count_word(char* str, char* n)
{
    int c,cn,i,j=0,count=0;
    c = strlen(str);
    cn = strlen(n);

    for(i=0;i<c;i++)
    {
        if(str[i]==n[j])
        {
            j++;
        }

        if(cn == j)
        {
            j=0;
            count++;
        }
    }

    return count;
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
