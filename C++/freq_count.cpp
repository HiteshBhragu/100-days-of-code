#include<iostream>
using namespace std;
void freq_count(int*,int);
int main()
{
    int siz = 7;
    int arr[siz] = {12, 3, 12, 4, 3, 15, 12};
    freq_count(arr, siz);
}

void freq_count(int*  arr,int siz)
{
    int k,temp,i,j,count = 0;
    for(i=0; i<siz; i++)
    {
        count = 0;
        for(j=i;j<siz;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        //cout<<arr[i]<<" = "<<count<<endl;
        for(k=i; k<siz; k++)
        {
            if(arr[k] != arr[i])
            {
                cout<<arr[i]<<" = "<<count<<endl;
                break;
            }
        }
    }
}
