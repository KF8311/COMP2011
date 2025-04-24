#include <iostream>     /* File: temperature.h */
#include <cstdlib>
using namespace std;
const char KELVIN = 'K', CELSIUS = 'C', FAHRENHEIT = 'F';

class temperature
{
  private:
    double degree;      // Internally it is always saved in Kelvin
  public:
    // CONSTRUCTOR member functions
    temperature();      // Default constructor
    temperature(double d, char s);

    // ACCESSOR member functions: don't modify data
    double kelvin() const;      // Read temperature in Kelvin
    double celsius() const;     // Read temperature in Fahrenheit
    double fahrenheit() const;  // Read temperature in Celsius

    // MUTATOR member functions: will modify data
    void set(double d, char s);
};
