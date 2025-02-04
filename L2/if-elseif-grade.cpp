#include <iostream>     /* File: if-elseif-grade.cpp */
using namespace std;	

int main()              /* To determine your grade (fictitious) */
{
    char grade;         // Letter grade
    int mark;           // Numerical mark between 0 and 100
    cin >> mark;
    
    if (mark >= 90) 
	    grade = 'A';    // mark >= 90
    else if (mark >= 60) 
	    grade = 'B';    // 90 > mark >= 60
    else if (mark >= 20) 
	    grade = 'C';    // 60 > mark >= 20
    else if (mark >= 10) 
	    grade = 'D';    // 20 > mark >= 10
    else 
       grade = 'F';     // 10 > mark 

    cout << "Your letter grade is " << grade << endl;
    return 0;
}
