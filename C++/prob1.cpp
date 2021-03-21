#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T,N,Z,row,col,status = 0;

    cout << "Enter the no. of test cases";
    cin >> T;   //No of test cases

    for(int i = 0; T != i; i++)
    {
        cout << "\n....TEST CASE " << i <<" INPUT...." << endl;
        cout << "Enter the size of matrix : " << endl;
        cout << "Enter the Strings (low case)" << endl;
        cin >> N;       //Size of matrix

        char mat[N][N];

        //Matrix input
        for(row = 0 ; row < N ; row++)
        {
            for(col = 0 ; col < N ; col++)
            {
                cin >> mat[row][col];
            }
        }

        cout << "Enter count of strings to be searched :";
        cin >> Z;
        cin.ignore();

        char testString[Z][500];
        cout << "Enter "<< Z <<" Strings" << endl;
        //Input Strings
        for(int i = 0 ; i < Z ; i++)
        {
            cout << "Enter string " << i+1 << " : ";
            cin >> testString[i];
        }

        //Main Logic
        char ch;
        for(int i = 0 ; i < Z ; i++)
        {
            cout << "\n....TEST CASE "<< i << " OUTPUT...." << endl;
            int freq[26] = {0};
            for(int j = 0 ; testString[i][j] != '\0' ; j++)
            {
                ch = testString[i][j];
                freq[ch-97]++;
            }

            int k = 0;
            while(k < N)
            {
                for(row = 0 ; row <= k ; row++)
                {
                    if(freq[(mat[k][row]) - 97] > 0)
                    {
                        freq[(mat[k][row]) - 97]--;
                        status = k;
                    }
                }

                for(col = 0 ; col < k ; col++)
                {

                    if(freq[(mat[col][k]) - 97] > 0)
                    {
                        freq[(mat[col][k]) - 97]--;
                        status = k;
                    }
                }

                k++;
            }
            cout << "\nStatus: " << status+1 << " , " << status+1;
        }
    }
    return 0;
}
