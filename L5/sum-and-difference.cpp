#include <iostream>     /* File: sum-and-difference.cpp */
using namespace std;	

// To find the sum and difference of 2 given numbers
void sum_and_difference(int x, int y, int& sum, int& difference) 
{
    sum = x + y;
    difference = x - y;
}

int main()
{
    int x, y, sum, difference;
    cout << "Enter 2 numbers: ";
    cin >> x >> y;

    sum_and_difference(x, y, sum, difference);
    cout << "The sum of " << x << " and " << y << " is " << sum << endl;
    cout << "The difference between " << x << " and " << y << " is " 
         << difference << endl;
    return 0;
}
