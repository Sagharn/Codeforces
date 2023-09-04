#include <iostream>
using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;
    int min(a), max(a), mini(0), maxi(0);
    for (int i = 1; i < n; i++)
    {
        cin >> a;
        if (a > max)
        {
            max = a;
            maxi = i;
        }
        
        if (a <= min)
        {
            min = a;
            mini = i;
        }
    }
    cout << maxi + (n - 1 - mini) - (mini < maxi ? 1 : 0) << endl;
    return 0;
}
