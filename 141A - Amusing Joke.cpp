#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() 
{
    string guestName, hostName, letters;
    cin >> guestName >> hostName >> letters;

    string names = guestName + hostName;

    sort(names.begin(), names.end());
    sort(letters.begin(), letters.end());

    if (names == letters) 
	{
        cout << "YES";
    }
	 
	else 
	{
        cout << "NO";
    }

    return 0;
}

