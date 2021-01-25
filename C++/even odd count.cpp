#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool superReducedString(char *inpstr, char *finstr);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char str[50];
    char finstr[50];

    cin >> str;
    if(superReducedString(str, finstr))
    {
        cout << "....Enter The Input String...." << endl;
        cout << "Reduced string is : " << finstr;
    }
    return 0;
}

bool check(char* inpstr)
{
    int i, count = 0, j, k = 0;

    char l;
    for(i = 0; inpstr[i] != '\0' ; i++)
    {
        if(inpstr[i] == inpstr[i+1])
        {
            superReducedString(inpstr, inpstr);
            break;
        }

    }
    return true;
}

bool superReducedString(char *inpstr, char *finstr)
{
    int i, count = 0, j, k = 0;

    char l;
    for(i = 0; inpstr[i] != '\0'; i++)
    {
        count = 0;
        j = i;
        while(inpstr[j] == inpstr[i])
        {
            j++;
            count++;
        }
        i = j-1;
        if(count % 2 != 0)
        {
            finstr[k] = inpstr[i];
            k++;
        }
    }
    finstr[k] = '\0';
    if(!check(finstr))
    {
        superReducedString(inpstr, finstr);
    }
    cout << finstr << endl;
    return true;
}
