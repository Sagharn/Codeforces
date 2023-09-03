#include <iostream>
#include <string>
using namespace std;

string decodeBorze(const string& borzeCode) 
{
    string ternaryNumber;
    int i = 0;
    
    while (i < borzeCode.length()) 
	{
        if (borzeCode[i] == '.') 
		{
            ternaryNumber += '0';
            i++;
        } 
		
		else if (borzeCode[i] == '-' && borzeCode[i + 1] == '.') 
		{
            ternaryNumber += '1';
            i += 2;
        } 
		
		else if (borzeCode[i] == '-' && borzeCode[i + 1] == '-') 
		{
            ternaryNumber += '2';
            i += 2;
        }
    }
    
    return ternaryNumber;
}

int main() 
{
    string borzeCode;
    cin >> borzeCode;
    
    string ternaryNumber = decodeBorze(borzeCode);
    
    cout << ternaryNumber << endl;
    
    return 0;
}

