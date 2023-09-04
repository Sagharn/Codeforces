#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
    int n;
    cin >> n;

    int total = 0;
    for (int i = 0; i < n; i++) 
	{
        int pi;
        cin >> pi;
        total += pi;
    }

    double average = total / (double) n;
    
    cout << fixed << setprecision(12) << average << endl;

    return 0;
}

