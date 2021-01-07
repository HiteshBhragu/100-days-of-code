#include <iostream>
using namespace std;

bool isSubarray(int arr1[],int arr2[],int size1, int size2);

int main() {
	//code
	int t, size1, size2;
	int *arr1, *arr2;
	cin >> t;
	bool *result = new bool[t];
	for(int j = 0; j < t; j++)
	{
	    cin >> size1;
	    cin >> size2;
	    arr1 = new int[size1];
	    arr2 = new int[size2];
	    for(int i = 0; i < size1; i++)
	    {
	        cin >> arr1[i];
	    }

	    for(int i = 0; i < size2; i++)
	    {
	        cin >> arr2[i];
	    }
        result[j] = isSubarray(arr1, arr2, size1, size2);
	}

	for(int i = 0; i < t; i++)
	{
	    if(result[i])
	        cout << "Yes" <<endl;
	    else
	        cout << "No" <<endl;
	}

	return 0;
}

bool isSubarray(int arr1[],int arr2[],int size1, int size2)
{
    int count = 0;
    for(int i = 0; i < size2; i++)
    {
        for(int j = 0; j < size1; j++)
        {
            if(arr2[i] == arr1[j])
                count++;
        }
    }

    if(count == size2)
        return true;

    return false;
}
