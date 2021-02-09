#include <iostream>
using namespace std;
int find_all_char(char*, char*);
int main()
{
    char str[30]="calculation",n;
    int i;
    cout<<str<<endl;
    cout<<"Enter the char = ";
    cin>>n;
    i = find_all_char(str,&n);
    cout<<i;
}

int find_all_char(char* str, char* n)
{
    int i=0;
    while(*str)
    {
        if(*str==*n)
        {
            i++;
        }
        str++;
    }
    return i;
}
