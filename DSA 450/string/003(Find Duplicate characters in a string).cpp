#include<iostream>
using namespace std;

void printDuplicateCount(char *str,int size);

int main()
{
    char str[] = "test string";
    printDuplicateCount(str, 12);

}

void printDuplicateCount(char *str,int size)
{
    int temp;
    int count[26] = {0};
    char c;
    for(int i = 0; i < size; i++)
    {
        temp = str[i];
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            count[temp-97]++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            count[temp-65]++;
        }

    }
    for(int i = 0; i < 26; i++)
    {
        c = (char)i+97;
        if(count[i] > 1)
            cout << c  << " " << count[i] << endl;
    }
}
