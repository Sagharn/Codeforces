#include <iostream>
using namespace std;
int main() 
{
int n;
cin >> n;
int minCapacity = 0;
int currentCapacity = 0;

for (int i = 0; i < n; i++) 
{
    int ai, bi;
    cin >> ai >> bi;

    currentCapacity -= ai; 
    currentCapacity += bi; 

    minCapacity = max(minCapacity, currentCapacity); 
}

cout << minCapacity << endl;

return 0;
}
