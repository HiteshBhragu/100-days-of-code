#include <iostream>
using namespace std;


void printArraystring(string str[], int n)
{
    for (int i=0; i<n; i++)
        cout << str[i] << " ";
}

void sort(string str[], int n)
{
    string temp;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(str[i].length() > str[j].length())
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main()
{
    //string arr[] = {"You", "are", "beautiful", "looking"};
    string arr[] = {"GeeksforGeeeks", "I", "from", "am"};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, n);

    printArraystring(arr, n);

    return 0;
}
