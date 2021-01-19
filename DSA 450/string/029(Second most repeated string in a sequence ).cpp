#include<iostream>
using namespace std;

string secFrequent (string arr[], int n);

int main()
{
    string str[] = {"aaa", "aaa", "aaa", "ccc", "ccc"};
    cout << secFrequent(str, 5);
}

string secFrequent (string arr[], int n)
{
    int count = 0, flag;
    string arr1[n];
    for(int i = 0; i < n-1; i++)
    {
        flag = 0;
        for(int k = 0; k < count; k++)
        {
            if(arr1[k] == arr[i])
                flag = 1;
        }
        if(0 == flag)
        {
            for(int j = i+1; j < n; j++)
            {
                if(arr[i] == arr[j])
                {
                    arr1[count] = arr[i];
                    count++;
                        //cout << arr[i] << " " << i << " " << j << endl;
                    if(count == 2)
                    {
                        return arr[i];
                    }
                    break;
                }
            }
        }
    }
}

