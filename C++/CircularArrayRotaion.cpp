#include<iostream>
using namespace std;

int main()
{
    int input[3];
    for(int i = 0; i < 3; i++)
    {
        cin >> input[i];
    }
    int arr[input[0]];
    for(int i = 0; i < input[0]; i++)
    {
        cin >> arr[i];
    }
    int index;
    int q, output[arr[2]];
    for(int j = 0; j < input[2]; j++)
    {
        cin >> q;
        if(input[1] > input[0])
        {
           input[1]  = input[1]%input[0];
        }
        index = (input[0] - input[1] + q)%input[0];
        output[j] = arr[index];
    }
    for(int i = 0; i < arr[2]; i++)
    {
        cout << output[i] << " ";
    }
}
