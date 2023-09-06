#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int compare(const string& str1, const string& str2) 
{
    string lowerStr1 = str1;
    transform(lowerStr1.begin(), lowerStr1.end(), lowerStr1.begin(), ::tolower);

    string lowerStr2 = str2;
    transform(lowerStr2.begin(), lowerStr2.end(), lowerStr2.begin(), ::tolower);

    return lowerStr1.compare(lowerStr2);
}

int main() 
{
    string str1, str2;
    cin >> str1 >> str2;

    int result = compare(str1, str2);

    if (result < 0) 
	{
        cout << "-1" << endl;
    }
    
    else if (result > 0) 
	{
        cout << "1" << endl;
    }
    
    else 
	{
        cout << "0" << endl;
    }

    return 0;
}

