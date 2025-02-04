#include <iostream>     /* File: switch-find-comp2011-instructor.cpp */
using namespace std;	

int main()              // To determine your instructor
{
    cout << "Enter the COMP2011 section number to find its instructor: ";
    int section;        // COMP2011 section number: should be 1, 2, 3, or 4
    cin >> section;     // Input COMP2011 section number

    switch (section)
    {
        case 1:
            cout << "Sergey Brin" << endl; break;
        case 2:
            cout << "Bill Gates" << endl; break;
        case 3: 
            cout << "Steve Jobs" << endl; break;
        case 4: 
            cout << "Jeff Bezos" << endl; break;
        default:
            cerr << "Error: Invalid lecture section " << section << endl; 
            break;
    }
    
    return 0;
}
