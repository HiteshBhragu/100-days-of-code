#include<iostream>
using namespace std;

int main()
{
    string input[] = { "DDDGDD",
            "BBDEBS",
            "BSKEBK",
            "DDDDDE",
            "DDDDDE",
            "DDDDDG" };
    string temp = "";
    string str = "GEEKS";
    for(int i = 0; i < 6; i++)
    {
        temp += input[i];
    }
    int min = 100000, count = 0;
    for(int i = 0; i < str.size(); i++)
    {
        count = 0;
        for(int j = 0; j < temp.size(); j++)
        {
            if(str[i] == temp[j])
                count++;
        }
        if(min > count)
            min = count;
    }
    cout << min;
}
