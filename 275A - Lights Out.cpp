#include <iostream>
using namespace std;
int main() 
{
    int grid[3][3];
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            cin >> grid[i][j];
        }
    }

    int result[3][3] = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}
    };

    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            if (grid[i][j] % 2 == 1) 
			{
                result[i][j] = 1 - result[i][j]; 
                if (i > 0) result[i - 1][j] = 1 - result[i - 1][j]; 
                if (i < 2) result[i + 1][j] = 1 - result[i + 1][j]; 
                if (j > 0) result[i][j - 1] = 1 - result[i][j - 1]; 
                if (j < 2) result[i][j + 1] = 1 - result[i][j + 1];
            }
        }
    }

    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            cout << result[i][j];
        }
        cout << endl;
    }

    return 0;
}

