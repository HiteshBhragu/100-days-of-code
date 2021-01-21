#include<iostream>
using namespace std;

void findTwoElement(int *arr, int n) ;

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

    findTwoElement(arr, size);
}


void findTwoElement(int *arr, int n)
{
        // code here
        int i, max = arr[0];
        for(i = 1; i < n; i++)
        {
            if(max < arr[i])
                max = arr[i];
        }
        int *occu = new int[max];
        for(i = 0; i < max; i++)
            occu[i] = 0;

        for(i = 0; i < n; i++)
        {
            occu[arr[i]]++;
        }

        for(i = 0; i <= max; i++)
        {
            if(occu[i] > 1)
            {
                cout << i << " ";
                if(i != 0 || i == max)
                {
                    if(occu[i-1] == 0)
                        cout << i-1;
                }else
                {
                    if(occu[i+1] == 0)
                        cout << i+1;
                }

            }
        }
    }
