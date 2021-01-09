#include <iostream>
using namespace std;
int main()
{
    int n, i=0, j, ctr, r;

    cout << " Input any number: ";
    cin >> n;

        for (i = 0; i < 10; i++)
        {
            cout << "The frequency of " << i << " = ";

            j=n;

            while(j>0)
            {

                r = j % 10;
                j=j/10;

                if (r == i)
            {

            }
        }
        cout << ctr << endl;
    }
}
