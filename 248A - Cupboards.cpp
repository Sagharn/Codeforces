#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    vector<int> leftDoors(n);
    vector<int> rightDoors(n);

    for (int i = 0; i < n; i++) 
	{
        cin >> leftDoors[i] >> rightDoors[i];
    }

    int leftOpen = 0;
    int leftClosed = 0;
    int rightOpen = 0;
    int rightClosed = 0;

    for (int i = 0; i < n; i++) 
	{
        if (leftDoors[i] == 1) 
		{
            leftOpen++;
        }
		 
		else 
		{
            leftClosed++;
        }

        if (rightDoors[i] == 1) 
		{
            rightOpen++;
        }
		 
		else 
		{
            rightClosed++;
        }
    }

    int t = min(leftOpen, leftClosed) + min(rightOpen, rightClosed);
    cout << t << endl;

    return 0;
}

