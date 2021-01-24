#include<iostream>
using namespace std;

#define MAX_STUDENTS 5
int main()
{
    int arr[MAX_STUDENTS];
    int i;
    float sum=0;
    float avg=0.0f;

    cout<<"Enter the value = ";

    for(i=0;i<MAX_STUDENTS;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    avg=sum/MAX_STUDENTS;
    cout<<"The average is = "<<avg;


    return 0;
}
