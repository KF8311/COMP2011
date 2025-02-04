#include <iostream>     /* random-element.cpp */
#include <cstdlib>
using namespace std;    /* To return a random array element */

int  element_rbv(int x[], int size) { return x[rand() % size]; }
int& element_rbr(int x[], int size) { return x[rand() % size]; }

void print_array(int x[], int size)
{
    for (int j = 0; j < size; j++) cout << x[j] << ' ';
    cout << endl;
}

int main()	
{
    srand(time(0));     // Seed the random num generator
    int data[6] = {10, 20, 30, 40, 50, 60};
    
    cout << element_rbv(data, 6) << endl; // Same as: cout << data[?]
    cout << element_rbr(data, 6) << endl; // Same as: cout << data[?]
    print_array(data, 6);
    element_rbr(data, 6) += 8;            // Same as: data[?] += 8
    print_array(data, 6);
}
