#include<iostream>
using namespace std;
//void bubbleSort(int *arr, int siz, int n);

void mergeAandB(int *A, int *B, int s, int s1)
{
    int a = s, b = s1;
    int temp, siz = s+s1, C[s+s1], c = 0;
    s = s1 = 0;
    for(int i = 0; i < siz; i++)
    {
        if(A[s] > B[s1])
        {
            C[c] = B[s1];
            c++;
            s1++;
        }
        else
        {
            C[c] = A[s];
            c++;
            s++;
        }
        if(s == a || s1 == b)
        {
            break;
        }
    }
    if(s == a)
    {
        for(int j = 0; j < siz/2; j++)
        {
            C[c] = B[s1];
            s1++;
            c++;
        }
    }

    if(s1 == b)
    {
        for(int j = 0; j < siz/2; j++)
        {
            C[c] = A[s];
            s++;
            c++;
        }
    }
    int j;
    for(j = 0; j < a; j++)
    {
        A[j] = C[j];
    }
    for(int n = 0; n < b; n++)
    {
        B[n] = C[j+n];
    }
    return ;
}

int main()
{
    int  siz = 12;
    int arr[siz] = {12, 8, 24, 17, 33, 71, 10, 48, 4, 21, 6, 20}, k = 0;

    for(int i = 0; i < siz/2; i++)
    {
        mergeAandB(&arr[k], &arr[k+1], 1, 1);
        k = k + 2;
    }

    k = 0;

    for(int i = 0; i < siz/4; i++)
    {
        mergeAandB(&arr[k], &arr[k+2], 2, 2);
        k = k + 4;
    }

    k = 0;
    mergeAandB(&arr[k], &arr[k+4], 4, 4);
    k = 0;
    mergeAandB(&arr[k], &arr[k+8], 8, 4);

    for(int j = 0; j < siz; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}
