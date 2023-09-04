#include <iostream>
using namespace std;

bool isPrime(int num) 
{
    if(num < 2) 
	{
        return false;
    }
    
    for(int i = 2; i * i <= num; i++) 
	{
        if(num % i == 0) 
		{
            return false;
        }
    }
    return true;
}

int getNextPrime(int n) 
{
    int nextPrime = n + 1;
    while(!isPrime(nextPrime)) 
	{
        nextPrime++;
    }
    return nextPrime;
}

int main() 
{
    int n, m;
    cin >> n >> m;

    int nextPrime = getNextPrime(n);
    
    if(nextPrime == m) 
	{
        cout << "YES" << endl;
    } 
	
	else 
	{
        cout << "NO" << endl;
    }

    return 0;
}

