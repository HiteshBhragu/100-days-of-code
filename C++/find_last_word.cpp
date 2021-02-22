#include<iostream>
using namespace std;
int strlen(char*);
int find_last_word(char*, char*);
int main()
{
    char str[50] = "come first take first",n[10];
    cout<<"Enter the char = ";
    cin>>n;
    int c;
    c = find_last_word(str, n);

    cout<<c;

}

int find_last_word(char* str, char* n)
{
    int i,j,c,t,nc;

    c = strlen(str);

    nc = strlen(n);
    j = nc;
    for(i=c;i>0;i--)
    {
        if(str[i]==n[j])
        {
            j--;
        }
        if(j==0)
        {
            break;
        }
    }
    t = i-1;

    return t;
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
