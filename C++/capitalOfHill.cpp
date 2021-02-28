#include <iostream>
using namespace std;
int findRequiredPairs(int num, int *arr);

int main() {
	int num;
	cin >> num;                                     // Reading input from STDIN
	int arr[num] = {0};
	for(int i = 0; i < num; i++)
	{
	    cin >> arr[i];
	}
	cout << endl;
	cout << findRequiredPairs(num, arr);		// Writing output to STDOUT
	return 0;
}

int findRequiredPairs(int num, int *arr)
{
    int count = 0, k = 0;
    for(int i = 0; i < num; i++)
    {
        if(i < num-1)
        {
//        cout << "i = " << i << endl;
//            k = i + 1;
//            while(arr[i] >= arr[k])
//            {
//                cout << "i = " << arr[i] << " k = " << arr[k] << endl;
//                if(arr[i] == arr[k])
//                {
//                    count++;
//                    break;
//                }
//                count++;
//                k++;
//            }
        }
        k = i;
        while(1)
        {
            if(arr[k]+1 == arr[k+1])
            {
                count++;
                k++;
            }
            else
            {
                break;
            }
        }
        cout << endl;
    }
    return count;
}
