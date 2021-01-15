#include <iostream>
using namespace std;
int count_consonants(char*);
int main()
{
    char str[30]="Programming";
    int c;
    c = count_consonants(str);
    cout<<c;
}

int count_consonants(char* ptr)
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

                break;
                default:
                    c++;
            }
        }
        ptr++;
    }

    return c;
}

