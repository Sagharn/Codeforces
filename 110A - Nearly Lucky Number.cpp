#include <iostream>
using namespace std;

int countLuckyDigits(long long n) 
{
    int count = 0;
    while (n > 0) 
	{
        if (n % 10 == 4 || n % 10 == 7) 
		{
            count++;
        }
        
        n /= 10;
    }
    return count;
}

bool isNearlyLucky(long long n) 
{
    int luckyDigits = countLuckyDigits(n);
    return luckyDigits == 4 || luckyDigits == 7;
}

int main() 
{
    long long n;
    cin >> n;

    if (isNearlyLucky(n)) 
	{
        cout << "YES" << endl;
    } 
	
	else 
	{
        cout << "NO" << endl;
    }

    return 0;
}

