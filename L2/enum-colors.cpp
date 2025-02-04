#include <iostream>     /* File: enum-colors.cpp */
using namespace std;

int main()
{   // Declare color variables immediately after the enum definition
    enum color { RED, GREEN, BLUE, YELLOW, CYAN, PURPLE } x, y;
    int xint, yint;     // Input variables for the color variables
    
    cin >> xint >> yint;
    x = static_cast<color>(xint); // Convert an int to a color quantity
    y = static_cast<color>(yint); // Convert an int to a color quantity
    
    if ( (x == RED && y == GREEN) || (y == RED && x == GREEN) )
        cout << YELLOW << endl;

    else if ( (x == RED && y == BLUE) || (y == RED && x == BLUE) )
        cout << PURPLE << endl;

    else if ( (x == GREEN && y == BLUE) || (y == GREEN && x == BLUE) )
        cout << CYAN << endl;

    else
        cerr << "Error: only support mixing RED/GREEN/BLUE!" << endl;
    
    return 0;
} // Check what is really printed out
