#include<iostream>
using namespace std;

int maxSubString(char str[], int);

int main()
{
    int size;
    cout << "Enter the size of string = ";
    cin >> size;
    char str[size];
    cin >> str;

    cout << maxSubString(str, size);

}

int maxSubString(char str[], int size)
{
    int count0 = 0, count1 = 0, count = 0;
    for(int i = 0; i < size; i++)
    {
        if(str[i] == '0')
            count0++;
        else
            count1++;

        if(count0 == count1)
            count++;
    }

    return count;

}
