#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int matrix[5][5];
    int targetRow = 3;
    int targetCol = 3; 
    int moves = 0;
 
    for (int i = 0; i < 5; i++) 
	{
        for (int j = 0; j < 5; j++) 
		{
            cin >> matrix[i][j];
        }
    }
 
    for (int i = 0; i < 5; i++) 
	{
        for (int j = 0; j < 5; j++) 
		{
            if (matrix[i][j] == 1) 
			{
                moves = abs(i - targetRow) + abs(j - targetCol);
            }
        }
    }
 
    cout << moves << endl;
 
    return 0;
}
