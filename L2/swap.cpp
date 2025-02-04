#include <iostream>     /* File: swap.cpp */
using namespace std;	

int main() /* To sort 2 numbers so that the 2nd one is larger */
{
    int x, y;           // The input numbers
    int temp;           // A dummy variable for manipulation
    
    cout << "Enter two integers (separated by whitespaces): ";
    cin >> x >> y;
    
    if (x > y)
    {
        temp = x;       // Save the original value of x
        x = y;          // Replace x by y
        y = temp;       // Put the original value of x to y
    }
    
    cout << x << '\t' << y << endl;
    return 0;
}
