#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    string s;
    int i = 0;
    while(T)
    {
        cin >> s;
        for(i = 0; i < s.length(); i++)
        {
            if(i % 2 == 0)
                cout << s[i];
        }
        cout << " ";
        for(i = 0; i < s.length(); i++)
        {
            if(i % 2 == 1)
                cout << s[i];
        }
        cout << endl;
        T--;
    }
    return 0;
}
