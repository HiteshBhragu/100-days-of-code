#include<iostream>
using namespace std;

int findMiddle(int a, int b, int c);

int main()
{
    int a, b, c;
    cin >>a >> b >> c;
    cout << findMiddle(a, b, c);
}

int findMiddle(int a, int b, int c)
{
        //code here//Position this line where user code will be pasted.
        if(a < b && a > c)
        {
            return a;
        }else if(b < a && b > c)
        {
            return b;
        }else if(b > a && b < c)
        {
            return b;
        }else if(c < b && c > a)
        {
            return c;
        }else if(c > b && c < a)
        {
            return c;
        }else if(a > b && a < c)
        {
            return a;
        }
        return -1;
}

