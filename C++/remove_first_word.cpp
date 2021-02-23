#include<iostream>
using  namespace std;
int strlen(char*);
void remove_last_word(char*, char*);
int main()
{
    char str[50] = "hitesh is my name", n[10];

    cout<<str<<endl;
    cout<<"Enter the char = "<<endl;
    cin>>n;

    remove_last_word(str, n);

    cout<<str;
}

void remove_last_word(char* str, char* n)
{
    int c, nc, i, j, k, d =0, count = 0;

    c = strlen(str);
    nc = strlen(n);

    for(i=0; i<c; i++)
    {
        if(str[i] == 32)
        {
            i = i+1;
            for(j=i; j<i+nc; j++)
            {
                if(str[j] == n[d])
                {
                    d++;
                    count++;
                }
                if(count == nc)
                {
                    for(k=i; k<c+1; k++)
                    {
                        str[k] = str[k+nc+1];
                    }
                }
            }
        }
        if(count == nc)
        {
            break;
        }
    }
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
