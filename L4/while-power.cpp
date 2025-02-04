#include <iostream>	/* File: while-power.cpp */
using namespace std;	

int main() /* To compute x^n where x and n are integers and n > 0 */
{
    int x; // The number
    int n; // Power or exponent
    int result = 1; // Final result = x^n
    
    cout << "Enter a number followed by its power: ";
    cin >> x >> n;  // Same as: cin >> x; cin >> n;

    if (n < 0)
        cerr << "Error: negative power is not supported right now." << endl;
    else
    {
        cout << x << " to the power of " << n << " = ";

        while (n > 0)
        {                                // The code may be shortened as:
            result *= x;                 // while (--n >= 0)
            --n;                          //      result *= x;
        }

        cout << result << endl;
    }

    return 0;
}
