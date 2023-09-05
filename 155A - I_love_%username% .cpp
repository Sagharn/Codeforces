#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    
    int points[n];
    
    for (int i = 0; i < n; i++) 
	{
        cin >> points[i];
    }
    
    int maxPoints = points[0];
    int minPoints = points[0];
    int amazingPerformances = 0;
    
    for (int i = 1; i < n; i++) 
	{
        if (points[i] > maxPoints) 
		{
            maxPoints = points[i];
            amazingPerformances++;
        }
        
        if (points[i] < minPoints) 
		{
            minPoints = points[i];
            amazingPerformances++;
        }
    }
    
    cout << amazingPerformances << endl;
    
    return 0;
}

