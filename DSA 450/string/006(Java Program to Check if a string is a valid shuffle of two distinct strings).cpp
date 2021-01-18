#include<iostream>
using namespace std;

bool isShuffle(char *str1, char *str2, char *shuffle, int size1, int size2, int size3);

int main()
{
    char str1[] = "XY";
    char str2[] = "12";
    char shuffle[] = "Y12X";
    if(isShuffle(str1, str2, shuffle, 2, 2, 4))
        cout << "True";
    else
        cout << "False";
}

bool isShuffle(char *str1, char *str2, char *shuffle, int size1, int size2, int size3)
{
    int i, index = 0, count = 0;
    for(i = 0; i < size3; i++)
    {
        if(str1[index] == shuffle[i])
        {
            //cout << "c = " << str1[index] << endl;
            index++;
            count++;
        }
    }
    //cout << count << endl;
    if(count == size1)
    {
        count = index = 0;
        for(i = 0; i < size3; i++)
        {
            if(str2[index] == shuffle[i])
            {
                //cout << "c = " << str1[index] << endl;
                index++;
                count++;
            }
        }
    }
    else
        return false;
    if(count == size2)
        return true;
    //cout << count << endl;
    return false;
}
