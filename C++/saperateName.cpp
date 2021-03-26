#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char name[50] = "Hitesh Vinit Rahul 350";
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
    int siz[count1+1] = {0}, j = 0;

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
    arr[count1-1][++j] = '\0';
    index++;
    while(name[index] != '\0' && name[index] != ' ')
    {
        a = a * 10 + (name[index] - 48);
        index++;
    }

}
