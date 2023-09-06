#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    cin.ignore();

    for (int i = 0; i < n; ++i) 
	{
        string word;
        getline(cin, word);

        if (word.length() > 10) 
		{
            string abbreviatedWord;
            abbreviatedWord.push_back(word[0]);
            abbreviatedWord += to_string(word.length() - 2);
            abbreviatedWord.push_back(word[word.length() - 1]);

            cout << abbreviatedWord << endl;
        }
        
        else 
		{
            cout << word << endl;
        }
    }

    return 0;
}
