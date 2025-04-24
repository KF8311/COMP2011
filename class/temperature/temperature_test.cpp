#include "temperature.h" /* File: temperature_test.cpp */

int main()
{
    char scale;
    double degree;
    temperature x;      // Use the default constructor
    
    cout << "Enter temperature (e.g., 98.6 F): "; 
    while (cin >> degree >> scale)
    {
        x.set(degree, scale);
        cout << x.kelvin() << " K" << endl;     // Print in Kelvin
        cout << x.celsius() << " C" << endl;    // Print in Celsius
        cout << x.fahrenheit() << " F" << endl; // Print in Fahrenheit

        cout << endl << "Enter temperature (e.g., 98.6 F): ";
    };

    return 0;
} 
