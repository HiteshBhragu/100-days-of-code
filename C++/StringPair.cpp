#include<iostream>
using namespace std;


string one[] = { "", "one", "two", "three", "four",
                 "five", "six", "seven", "eight",
                 "nine", "ten", "eleven", "twelve",
                 "thirteen", "fourteen", "fifteen",
                 "sixteen", "seventeen", "eighteen",
                 "nineteen" };

string ten[] = { "", "", "twenty", "thirty", "forty",
                 "fifty", "sixty", "seventy", "eighty",
                 "ninety" };

string numToWords(int n, string s)
{
    string str = "";

    if (n > 19)
        str += ten[n / 10] + one[n % 10];
    else
        str += one[n];
    if (n)
        str += s;

    return str;
}

string convertToWords(long n)
{
    string out;

    out += numToWords((n / 10000000), "crore ");

    out += numToWords(((n / 100000) % 100), "lakh ");

    out += numToWords(((n / 1000) % 100), "thousand ");

    out += numToWords(((n / 100) % 10), "hundred ");

    if (n > 100 && n % 100)
        out += "and ";

    out += numToWords((n % 100), "");

    return out;
}

int getVowelCount(string s)
{
    int len = s.length(), count = 0;
    for(int i = 0; i < len; i++)
    {
        if(s[i] == 'a'){
            count++;
        } else if(s[i] == 'e'){
            count++;
        } else if(s[i] == 'i'){
            count++;
        } else if(s[i] == 'o'){
            count++;
        } else if(s[i] == 'u'){
            count++;
        }
    }
    return count;
}

int main()
{
    int n, i;
    cin >> n;

    int *arr = new int[n];
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int D = 0, temp;
    int *arrpair = new int[n];
    for(i = 0; i < n; i++){
        arrpair[i] = -1;
    }

    for(i = 0; i < n; i++)
    {
        temp = getVowelCount(convertToWords(arr[i]));
        D += temp;
    }

    int count = 0, index = 0;
    bool flag = false;
    for(i = 0; i< n; i++){
        for(int j = i+1; j< n; j++){
            if(arr[i] + arr[j] == D)
            {
                flag = true;
                for(int k = 0; k < n; k++)
                {
                    if(arr[i] == arrpair[k] || arr[j] == arrpair[k]){
                        flag = false;
                    }
                }
                if(flag){
                    count++;
                    arrpair[index] = arr[i];
                    index++;
                }
            }
        }
    }

    if(count < 100)
        cout << convertToWords(count);
    else if(count == 100)
        cout << "hundred";
    else
        cout << "greater 100";

    return 0;
}
