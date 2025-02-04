#include <iostream>     /* File: for-power.cpp */
using namespace std;	

/* To compute $x^n$, where x and n are integers, and n >= 0 */
int main() 
{
    int x;
    int n;              // Power or exponent
    int result = 1;     // Need to initialize it to 1. Why?
    
    cout << "Enter a number followed by its +ve power: ";
    cin >> x >> n;

    if (n < 0)
        cerr << "Error: n < 0!" << endl;
    else
    {
        for (int j = 1; j <= n; j++)
            result *= x;

        cout << x << " to the power of " << n << " = " << result << endl;
    }
    
    return 0;
}
