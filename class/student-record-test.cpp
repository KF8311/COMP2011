#include <iostream>     /* File: student-record-test.cpp */
using namespace std;
#include "student-record.h"

int main()	
{
    student_record amy, bob; // Create 2 static student_record objects

    amy.set("Amy", 12345, 'F');   // Put values to their data members
    bob.set("Bob", 34567, 'M');

    cout << amy.get_id() << endl; // Get and print some data member
    amy.copy(bob);           // Amy wants to fake with Bob's identity
    amy.print();

    return 0; 
    // Amy and Bob are static object, which will be destroyed
    // at the end of the function --- main() here --- call.
}   /* To compile: g++ student-record-test.cpp */
