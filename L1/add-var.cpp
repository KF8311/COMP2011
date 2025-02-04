#include <iostream>     /* File: add-var.cpp */
using namespace std;

int main()              // Program's entry point
{
    int x, y;           // Define 2 variables to hold the int values to add

    cin >> x;           // You may also shorten the 2 statements into one:
    cin >> y;           // cin >> x >> y;

    cout << x << " + " << y << " = " << x+y << endl; 

    return 0;           // A nice ending
}
