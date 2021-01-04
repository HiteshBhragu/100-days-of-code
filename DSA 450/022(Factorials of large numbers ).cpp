#include<iostream>
using namespace std;

long long calculateFattorial(int);

int main()
{
    long long no = 0;
    cout << "Enter the size of array = ";
    cin >> no;

    cout << calculateFattorial(no);

}

long long calculateFattorial(int no)
{
    int fac = 1;
    for(int i = 1; i <= no; i++)
    {
        fac = fac*i;
    }
    return fac;
}

