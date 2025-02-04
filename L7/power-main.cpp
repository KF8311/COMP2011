#include <iostream>	/* File: power-main.cpp */
using namespace std;	

double power(double, int);

int main()	
{
    double x;
    int n;

    while (cin >> x >> n)
        cout << x << " to the power " << n << " = " << power(x,n) << endl;
    
    return 0;
}
