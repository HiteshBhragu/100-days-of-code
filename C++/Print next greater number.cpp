#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void display(int a[], int size);

int main()
{
    int size = 5;
//    cin >> size;
//    int arr[size];
//    for(int i = 0; i < size; i++)
//        cin >> arr[i];
    int arr[] = {4,5,2,1,25};
    display(arr, size);
}
void display(int arr[], int size)
{
    stack<int> s;
    vector<int> ans(size);
    for(int i = size-1; i >= 0; i--)
    {
        while(!s.empty() && s.top() < arr[i])
        {
            s.pop();
         }

        if(s.empty())
        {
            ans[i] = -1;
            s.push(arr[i]);
        }
        else
        {
            ans[i] = s.top();
            s.push(arr[i]);
        }
    }
    for(int i = 0; i < size; i++)
        cout << ans[i] << " ";
}

