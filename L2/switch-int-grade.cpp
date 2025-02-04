#include <iostream>     /* File: switch-int-grade.cpp */
using namespace std;	

int main()              // To determine your grade (fictitious)
{
    char grade;         // Letter grade
    int mark;           // Numerical mark between 0 and 100
    cin >> mark;
    
    switch (mark/10) 
    {
        case 10:        // Several cases may share the same action
        case 9: 
            grade = 'A'; break; // If mark >= 90
        case 8: case 7: case 6: // May write several cases on 1 line
            grade = 'B'; break; // If 90 > mark >= 60
        case 5: 
        case 4: 
        case 3: 
        case 2:
            grade = 'C'; break; // If 60 > mark >= 20
        case 1:
            grade = 'D'; break; // If 20 > mark >= 10
        default:
            grade = 'F'; break;
    }
    
    cout << "Your letter grade is " << grade << endl;
    return 0;
}
