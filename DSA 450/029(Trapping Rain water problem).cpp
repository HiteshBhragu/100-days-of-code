#include <iostream>
using namespace std;

int calculateWaterTrapped(int arr[],int size);
int findMax(int [], int , int);
int main() {
	//code


	int t, size;
	int *arr;
	cin >> t;
	int *result = new int[t];
	for(int j = 0; j < t; j++)
	{
	    cin >> size;
	    arr = new int[size];
	    for(int i = 0; i < size; i++)
	    {
	        cin >> arr[i];
	    }

        result[j] = calculateWaterTrapped(arr, size);
	}

	for(int i = 0; i < t; i++)
	{
	    cout << result[i] << endl;
	}

	return 0;
}

int calculateWaterTrapped(int arr[],int size)
{
    //2 7 7 9 3 1 9

    int start = 0, end = 0, temp, trap = 0, m, tt = 0;
    int max = start = end = findMax(arr,0,size);
    for(int i = end-1; i > 0; i--)
    {
        if(arr[i-1] < arr[i])
        {
            start = i;
        }
        else if(i-1 == 0)
        {
            start = i-1;
        }
        else
            continue;
        if(i == end-1)
        {
            if(arr[findMax(arr,start+1,size)] == arr[max])
                start = size-1;
        }

        if(arr[start] > arr[end])
            m = arr[end];
        else
            m = arr[start];

        for(int j = start+1; j < end; j++)
        {
        //if(arr[i] <= m)
            {
                temp = m-arr[j];
                trap += temp;
                //cout << i << "===temp == " << temp<< endl;;
            }
        }
        //cout << "trap == " << trap << endl;;
        tt += trap;
        //cout << "start == " << start << endl;;
        //cout << "end == " << end << endl << endl;
        end = start;
        i = end;
    }

    start = end = max;
    for(int i = start+1; i < size-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            end = i;
        }
        else if(i+1 == size-1)
        {
            end = i+1;
        }

        if(i == start+1)
        {
            if(arr[findMax(arr,start+1,size)] == arr[max])
                end = size-1;
        }


        else
            continue;

        if(arr[start] > arr[end])
            m = arr[end];
        else
            m = arr[start];

        for(int j = start+1; j < end; j++)
        {
        //if(arr[i] <= m)
            {
                temp = m-arr[j];
                trap += temp;
                //cout << i << "===temp == " << temp<< endl;;
            }
        }
        //cout << "trap == " << trap << endl;;
        tt += trap;
        //cout << "start == " << start << endl;;
        //cout << "end == " << end << endl << endl;
        start = end;
        i = start;

    }
    return trap;
}


int findMax(int arr[], int start, int end)
{
    int max = arr[start], index = start;
    for(int i = start; i < end; i++)
    {
        if(max < arr[i]){
            max = arr[i];
            index = i;
        }
    }
    return index;
}












