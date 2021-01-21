#include<iostream>
using namespace std;

int search(int *arr, int size, int x);

int main()
{
    int size, x;
    cout << "Enter the size of array = ";
    cin >> size;
    int *arr = new int[size];
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the value of Element = ";
    cin >> x;
    cout << search(arr, size, x);
}

int search(int* nums, int numsSize, int target){
    for(int i = 0; i < numsSize; i++)
    {
        if(target == nums[i])
        {
            return i;
        }
    }
    return -1;
}
