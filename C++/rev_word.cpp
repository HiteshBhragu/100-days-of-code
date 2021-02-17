#include<iostream>
#include<hitesh_string.h>
#include<stdio.h>
using namespace std;

void reverse_word(char *);

int main()
{
    char str[50];
    gets(str);
    reverse_word(str);
    cout<<"String after reverse word = "<<str<<"\n";
    return 0;
}
void reverse_word(char *str)
{
    int i,j,k,l,t=0;
    char re[50];
    i = count_words(str);
    l = strlen(str);
    for(j=l; j>=0; j--)
    {
        if(str[j] == 32 || j == 0)
        {
            if(j==0)
            {
                j--;
            }
            for(k=j+1; str[k]!=32; k++)
            {
                re[t] = str[k];
                t++;

                if(str[k] == '\0')
                {
                    t--;
                    break;
                }
            }
            re[t]= ' ';
            t++;
        }
    }
    re[l] = '\0';
    strcpy(re,str);
}