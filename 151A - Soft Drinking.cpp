#include <iostream>
using namespace std;
int main() 
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drinkToasts = (k * l) / (n * nl);
    int limeToasts = (c * d) / n;
    int saltToasts = p / (n * np);

    int minToasts = min(drinkToasts, min(limeToasts, saltToasts));

    cout << minToasts;

    return 0;
}

