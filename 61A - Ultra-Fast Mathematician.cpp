#include <iostream>
#include <string>
using namespace std;
string calculateAnswer(string num1, string num2) 
{
    string answer = "";
    int length = num1.length();

    for (int i = 0; i < length; i++) 
	{
        if (num1[i] != num2[i]) 
		{
            answer += "1";
        } 
		
		else 
		{
            answer += "0";
        }
    }

    return answer;
}

int main() 
{
    string num1, num2;
    cin >> num1 >> num2;

    string answer = calculateAnswer(num1, num2);

    cout << answer << endl;

    return 0;
}

