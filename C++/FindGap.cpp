#include<iostream>
using namespace std;
int findGapUp(int *low, int *close, int n);
int findGapDown(int *high, int *close, int n);

int main()
{
    int n;

    cout << "How many days? ";
    cin >> n;

    int low[n], high[n], close[n], day[n];

    for(int i = 0; i < n; i++)
    {
        cin >> low[i];
    }

    for(int i = 0; i < n; i++)
    {
        cin >> high[i];
    }

    for(int i = 0; i < n; i++)
    {
        cin >> close[i];
    }

    cout << "Gap up = " << findGapUp(low, close, n);
    cout << "\nGap Down = " << findGapDown(high, close, n);
}

int findGapUp(int *low, int *close, int n)
{
    int count = 0;
    for(int i = 1; i < n; i++)
    {
        if(low[i] > close[i-1])
        {
            count++;
        }
    }
    return count;
}

int findGapDown(int *high, int *close, int n)
{
    int count = 0;
    for(int i = 1; i < n; i++)
    {
        if(high[i] < close[i-1])
        {
            count++;
        }
    }
    return count;
}
