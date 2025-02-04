#include <iostream>	/* File: factorial-main.cpp */
using namespace std;	

int factorial(int);

int main()	
{
    int x;
    int result;

    while (cin >> x)
    {
        result = factorial(x);

        if (result < 0)
            cout << "Input must be >= 0" << endl;
        else
            cout << "factorial(" << x << ") = " << result << endl;
    }
    
    
    return 0;
}
