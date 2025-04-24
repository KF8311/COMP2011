#include "temperature.h" /* File: temperature_mutators.cpp */

void temperature::set(double d, char s)
{
    switch (s)
    {
        case KELVIN: degree = d; break;
        case CELSIUS: degree = d + 273.15; break;
        case FAHRENHEIT: degree = (d - 32.0)*5.0/9.0 + 273.15; break;
            
        default: cerr << "Bad temperature scale: " << s << endl;
        exit(-1);
    }

    if (degree < 0.0)   // Check for integrity of data
    {
        cerr << "Temperature less than absolute zero!" << endl;
        exit(-2);
    }
}
