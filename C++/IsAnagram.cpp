#include<iostream>
#include<hitesh_string.h>
#define MAX_NAME_SIZE 50
using namespace std;
bool isAnagram(char *s1, char *s2);

int main()
{
    char str1[20];
    char str2[20];
    cout << "Enter the first string and second sting = ";
    cin >> str1;
    cin >> str2;
    if(isAnagram(str1, str2))
    {
        cout << "Yes, both string are anagram of each other.";
    }
    else
    {
        cout << "No, both string are not anagram of each other";
    }
}

bool isAnagram(char *s1, char *s2)
{
    int len1, len2, count = 0;
    len1 = strlen(s1);
    len2 = strlen(s2);
    char unistr[15];
    if(len1 == len2)
    {
        int i, j, k = 0;
        for(i = 0; i < len1; i++)
        {
            count = 0;
            for(j = 0; j <= i; j++)
            {
                if(s1[i] == unistr[j])
                {
                    count++;
                }
            }
            if(count == 0)
            {
                unistr[k] = s1[i];
                k++;
            }
        }
        unistr[k] = '\0';
        int l, count2 = 0, count3 = 0;
        l = strlen(unistr);
        k = count = 0;
        for(i = 0; i < l; i++)
        {
            count2 = count = 0;
            for(j = 0; j < len1; j++)
            {
                if(unistr[k] == s1[j])
                {
                    count++;
                }
                if(unistr[k] == s2[j])
                {
                    count2++;
                }
            }
            k++;
            if(count == count2)
            {
                count3++;
            }
            count = count2 = 0;
        }
        if(count3 == l)
        {
            return true;
        }
        return false;
    }
}
