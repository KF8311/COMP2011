#include <iostream>     /* File: switch-no-break.cpp */
using namespace std;	

int main()              // To determine your grade (fictitious) 
{
    char grade;         // Letter grade
    int mark;           // Numerical mark between 0 and 100
    cin >> mark;
    
    /* What happens if you forget to break? What is the output? */
    switch (mark/10) 
    {
        case 10: case 9: 
            cout << "Your grade is A" << endl;
        case 8: case 7: case 6:
            cout << "Your grade is B" << endl;
        case 5: case 4: case 3: case 2:
            cout << "Your grade is C" << endl;
        case 1:
            cout << "Your grade is D" << endl;
        default:
            cout << "Your grade is F" << endl;
    }
    
    return 0;
}
