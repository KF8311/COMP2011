/* File: temperature.h */
class temperature
{   ...
    double kelvin() const ;
    double celsius() const;
};

/* File: temperature.cpp */
#include "temperature.h"
...
double temperature::kelvin() const { return degree; }
double temperature::celsius() const { return degree - 273.15; }
