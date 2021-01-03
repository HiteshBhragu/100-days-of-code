#include<iostream>
using namespace std;

int main()
{
    int a = 6, b = 4;
    b = a+b;
    a = b-a;
    b = b-a;

    cout << a << endl;
    cout << b << endl;
}
