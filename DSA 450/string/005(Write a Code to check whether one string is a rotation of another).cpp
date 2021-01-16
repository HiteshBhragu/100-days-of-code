#include<iostream>
using namespace std;

bool areRotations(char *str1, char *str2, int size1, int size2);

int main()
{
    char str1[] = "ABCD";
    char str2[] = "DABC";

    if(areRotations(str1, str2, 5, 5))
        cout << "True";
    else
        cout << "False";

}

bool areRotations(char *str1, char *str2, int size1, int size2)
{
    if(size1 != size2)
        return false;
    char temp = str1[0];
    int count = 0;
    for(int i = 0; i < size1; i++)
    {

        if(temp == str2[i])
        {
            count++;
            temp = str1[count];
        }
    }
    for(int i = 0; i < size1-count+1; i++)
    {

        if(temp == str2[i])
        {
            count++;
            temp = str1[count];
        }
    }
    if(count == size1-1)
        return true;
    return false;
}

