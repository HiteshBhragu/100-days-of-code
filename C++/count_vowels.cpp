#include <iostream>
using namespace std;
int count_vowels(char*);
int main()
{
    char str[30]="Programming";
    int c;
    c = count_vowels(str);
    cout<<c;
}

int count_vowels(char* ptr)
{
    int c=0;

    while(*ptr)
    {
        if((*ptr>='a'&&*ptr<='z')||(*ptr>='A'&&*ptr<='Z'))
        {
            switch(*ptr)
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                c++;
                break;
            }
        }
        ptr++;
    }

    return c;
}
