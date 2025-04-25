#include <iostream>     /* File: non-oop-temperature.cpp */
using namespace std;
const char CELSIUS = 'C', FAHRENHEIT = 'F';

struct temperature
{
    char scale;
    double degree;
};

int main()
{
    temperature x;
    x.scale = CELSIUS;
    x.degree = -1000;   // That is IMPOSSIBLE!!!!
                        // But how can you prevent this to happen?
    return 0;
};
