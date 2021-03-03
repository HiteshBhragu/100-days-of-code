#include<iostream>
#include<cstdio>
using namespace std;

int is_palindrom(char userString[])
{
    int start,last,charcount=0;
    char temp;

    for(start=0;userString[start];start++)
    {
        charcount++;
    }

    for(start=0,last=charcount-1;start<charcount/2;start++,last--)
    {
        if(userString[start]!=userString[last])
        {
            return 0;
        }
    }

    return 1;
}

void leftShift(char userString[])
{
    int start,last,charcount=0;

    for(start=0;userString[start];start++)
    {
        charcount++;
    }

    char temp = userString[0];

    for(start=0; start<charcount; start++)
    {
        userString[start] = userString[start+1];
    }

    userString[charcount-1] = temp;
}

void rightShift(char userString[])
{
    int start,last,charcount=0;

    for(start=0;userString[start];start++)
    {
        charcount++;
    }

    char temp = userString[charcount];

    for(start = charcount; start != 0; start--)
    {
        userString[start+1] = userString[start];
    }
    userString[0] = temp;
}

int minimumShiftToGetPallindrome(char userString[], int charcount)
{
    int minimumCount = -1, start = 0;

    for(int counter = 0; counter < charcount; counter++)
    {
        if(is_palindrom(userString) == 1)
        {
            minimumCount = counter+1;
            break;
        }
        else
        {
            leftShift(userString);

            if(is_palindrom(userString) == 1)
            {
                rightShift(userString);
            }
            if(is_palindrom(userString) == 1)
            {
                minimumCount = counter+1;
                break;
            }
        }
    }

    int rightShift = charcount-minimumCount;

    if(rightShift >= minimumCount)
    {
         return minimumCount;
    }

    return rightShift;
}

int main()
{
    char userString[50], originalStr[50];;
    int count = 0, charcount = 0;
    cout << "Enter the String 1 :" << endl;
    gets(originalStr);

    for(int start=0;userString[start];start++)
    {
        charcount++;
    }

    for(int i = 0; i < charcount+1; i++)
    {
        userString[i] = originalStr[i];
    }

    count = minimumShiftToGetPallindrome(userString, charcount);

    if(count > -1)
    {
        cout << "Minimum Count is : " << count;
    }
    else
    {
        cout << "There is no palindrome.";
    }

    return 0;
}
