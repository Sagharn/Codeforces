#include <iostream>
using namespace std;

int main() 
{
	string car;
	cin >> car;
	int flag = 0;
	for (int i = 0;i < car.size();i++) 
	{
		if (car[i] >= 33 && car[i] <= 126) 
		{
			if (car[i] == 'H' || car[i] == 'Q' || car[i] == '9')
				flag = 1;
		}
	}
	
	if (flag) 
	{
		cout << "YES";
	}
	
	else 
	{
		cout << "NO";
	}
	return 0;
}
