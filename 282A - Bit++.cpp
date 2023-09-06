#include <iostream>
using namespace std;

int main() 
{
	int n;
	cin >> n;
	int x = 0;
	string str;
	while (n--) 
	{
		cin >> str;
		if (str[0] == '+' && str[1] == '+' && str[2] == 'X') {
			x += 1;
		}
		else if (str[0] == 'X' && str[1] == '+' && str[2] == '+') {
			x += 1;
		}
		else if (str[0] == 'X' && str[1] == '-' && str[2] == '-') {
			x -= 1;
		}
		else if (str[0] == '-' && str[1] == '-' && str[2] == 'X') {
			x -= 1;
		}
	}
	cout << x;
	return 0;
}
