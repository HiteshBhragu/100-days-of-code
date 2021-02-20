#include<iostream>
using namespace std;
int strlen(char*);
void remove_last_word(char*, char*);
int main()
{
    char str[50] = "my name is name hitesh",n[10];
    cout<<str<<endl;
    cout<<"Enter the char = ";
    cin>>n;

    remove_last_word(str, n);

    cout<<str;

}

void remove_last_word(char* str, char* n)
{
    int i,j,c,k,nc,d=0;

    c = strlen(str);

    nc = strlen(n);
    nc = nc+1;
    for(i=c;i>0;i--)
    {
        if(str[i]==32)
        {
            for(j=i+1;j<i+nc;j++)
            {
                if(str[j] == n[d])
                {
                    d++;
                }
                if(d == nc-1)
                {
                    for(k=i+1;k<c;k++)
                    {
                        str[k] = str[k+nc];
                    }
                }
            }
            if(d == nc-1)
            {
                 break;
            }
        }
    }
    return ;
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
