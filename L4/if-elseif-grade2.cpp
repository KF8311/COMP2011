#include <iostream>     /* File: if-elseif-grade2.cpp */
using namespace std;	

int main()    /* Re-implement switch-int-grade.cpp using if-else-if */
{
    int percentile;     // How many % of students are worse than you
    cin >> percentile;

    int percentile_div_10 = percentile/10;
    char grade;         // Letter grade
    
    if (percentile_div_10 == 10 || percentile_div_10 == 9)
	    grade = 'A';    // percentile >= 90

    else if (percentile_div_10 == 8 || percentile_div_10 == 7 || percentile_div_10 == 6)
	    grade = 'B';    // 90 > percentile >= 60

    else if (percentile_div_10 == 5 || percentile_div_10 == 4
             || percentile_div_10 == 3 || percentile_div_10 == 2)
	    grade = 'C';    // 60 > percentile >= 20

    else if (percentile_div_10 == 1)
	    grade = 'D';    // 20 > percentile >= 10

    else 
       grade = 'F';     // 10 > percentile 

    cout << "Your grade is " << grade << endl;
    return 0;
}
