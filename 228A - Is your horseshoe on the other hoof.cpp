#include <iostream>
#include <set>
using namespace std;
int main() 
{
    set<int> colors;
    int color;

    for (int i = 0; i < 4; ++i) 
	{
        cin >> color;
        colors.insert(color);
    }

    int minimumToBuy = 4 - colors.size();
    cout << minimumToBuy << endl;

    return 0;
}

