#include <iostream> 	/* File: wrong-toh.cpp */
using namespace std;

void tower_of_hanoi(int first, int last, char pegA, char pegB, char pegC)
{
    if (last == first) // Base case
    {
    	cout << "move disc " << first << " from peg " << pegA 
	     << " to peg " << pegC << endl;
	return;
    }

    cout << "move disc " << first 
	 << " from peg " << pegA << " to peg " << pegB << endl;

    tower_of_hanoi(first+1, last, pegA, pegB, pegC);

    cout << "move disc " << first 
	 << " from peg " << pegB << " to peg " << pegC << endl;
}
