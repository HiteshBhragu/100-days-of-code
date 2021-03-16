#include<iostream>
#include<stdio.h>
using namespace std;
int count_lenght(char*);
bool strcmp(char*,char*);

int main()
{
    char name[50] = "Pankaj Pranav Mayank Nihit Mukesh";
    //gets(name);
    cout << name << endl;
    int index = 0, count1 = 0, a = 0;

    while(name[index] != '\0')
    {
        if(name[index] == ' ')
        {
            count1++;
        }
        else if(name[index] >= 48 && name[index] <= 57)
        {
            count1--;
            a = name[index] - 48;
            break;
        }
        index++;
    }
    int siz[count1+1] = {0}, j = 0, money[count1+1] = {0}, c = 0;

    for(int i = 0; i < index; i++)
    {
        if(name[i] != ' ')
        {
            siz[j]++;
        }
        else
        {
            siz[j]++;
            j++;
        }
    }

    char *arr[count1+1];

    for(int i = 0; i < count1+1; i++)
    {
        arr[i] = new char[siz[i]];
    }
    count1 = 0;
    j = -1;
    for(int i = 0; i < index; i++)
    {
        if(name[i] != ' ')
        {
            j++;
            arr[count1][j] = name[i];
        }
        else
        {
            j++;
            arr[count1][j] = '\0';
            j = -1;
            count1++;
        }
    }

    int n = 5;
    //cin >> n;
    char *str[n];

    for(int i = 0; i < n; i++)
    {
        str[i] = new char [50];
    }
//    for(int i = 0; i < n; i++)
//    {
//        cin.ignore();
//        gets(str[i]);
//    }
    str[0] = "Pankaj 600 Pranav Mayank\0";
    str[1] = "Pranav 450 Mayank Nihit\0";
    str[2] = "Mayank 300 Mukesh Pranav Nihit\0";
    str[3] = "Nihit 1200 Pranav Pankaj\0";
    str[4] = "Mukesh 3000 Pranav Pankaj Mayank\0";
    for(int i = 0; i < n; i++)
    {
        cout << str[i] << endl;
    }
    for(int i = 0; i < n; i++)
    {
        index = 0;
        while(str[i][index] != '\0')
        {
            if(str[i][index] >= 48 && str[i][index] <= 57)
            {
                a = str[i][index] - 48;
                index++;
                break;
            }
            index++;
        }
        while(str[i][index] != '\0' && str[i][index] != ' ')
        {
            a = a * 10 + (str[i][index] - 48);
            index++;
        }
        index = 0;
        int c1 = 0;
        char temp[10] = {'\0'};
        index = 0;

        while(str[i][index] != '\0')
        {
            if((str[i][index] >= 'a' && str[i][index] <= 'z') || (str[i][index] >= 'A' && str[i][index] <= 'Z'))
            {
                char temp[10] = {'\0'}; int c = 0;
                while(str[i][index] != ' ' && str[i][index] != '\0')
                {
                    temp[c] = str[i][index];
                    c++;
                    index++;
                }
                for(int j = 0; j < 5; j++)
                {
                    if(strcmp(temp, arr[j]))
                    {
                        c1++;
                    }
                }
            }
            index++;
        }
        index = 0;
        while(str[i][index] != '\0')
        {
            if((str[i][index] >= 'a' && str[i][index] <= 'z') || (str[i][index] >= 'A' && str[i][index] <= 'Z'))
            {
                char temp[10] = {'\0'}; int c = 0;
                while(str[i][index] != ' ' && str[i][index] != '\0')
                {
                    temp[c] = str[i][index];
                    c++;
                    index++;
                }
                for(int j = 0; j < 5; j++)
                {
                    if(strcmp(temp, arr[j]))
                    {
                        money[j] = (-a/c1) + money[j];
                    }
                }
            }
            index++;
        }
        index = 0;
        while(str[i][index] != '\0')
        {
            if(str[i][index] == ' ')
            {
                for(int a = 0; a < index; a++)
                {
                    temp[a] = str[i][a];
                }
                break;
            }
            index++;
        }
        for(int j = 0; j < 5; j++)
        {
            if(strcmp(temp, arr[j]))
            {
                money[j] = money[j] + a;
                break;
            }
        }
    }
    for(int k = 0; k < 5; k ++)
    {
        cout << arr[k] << " = " << money[k] << endl;
    }
}

bool strcmp(char* str1,char* str2)
{
    int c,i,j=0,nc;
    nc = count_lenght(str2);
    c = count_lenght(str1);
    for(i=0;i<c;i++)
    {
        if(str1[i] == str2[i])
        {
            j++;
        }
    }
    if(c == j && c == nc)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int count_lenght(char* ptr)
{
    int c=0;
    while(*ptr!=0)
    {
        ptr++;
        c++;
    }
    return c;
}
