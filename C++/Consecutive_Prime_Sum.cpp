#include<iostream>
using namespace std;

int isPrime(int a)
{
    int flag = 0;
    int i,ctr=0;
    for(i=2;i<=a/2;i++){
        if(a % i==0){
            ctr++;
            break;
        }
    }
    if(ctr==0 && a!= 1)
        return 1;
    else
      return 0;
}


int main()
{
    int num, index = 0;
    cin >> num;
    int *prime = new int[num];
    for(int i = 2; i <= num; i++)
    {
        if(isPrime(i))
        {
            prime[index] = i;
            index++;
        }
    }

    int sum = prime[0], count = 0;
    for(int i = 1; i < index; i++)
    {
            sum += prime[i];
            if(sum > num){
                break;
            }
            if(isPrime(sum)){
                count++;
            }
    }
    cout << count;
}
