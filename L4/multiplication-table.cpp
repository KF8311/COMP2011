#include <iostream>     /* File: multiplication-table.cpp */
#include <iomanip>      // a library that helps control input/output formats
using namespace std;	

int main()	
{
    // To print out products of j*k where j, k = 1,...,10
    for (int j = 1; j <= 10; ++j)
    {
        for (int k = 1; k <= 10; ++k) // Reset k=1 for each j. Why?
            cout << setw(4) << j*k;   // Set the length of output field to 4
        
        cout << endl;
    }

    return 0;
}
