#include <iostream>     /* File: symbolic-constant.cpp */
#include <cmath>        // For calling the ceil() function
using namespace std;

int main()
{
    const int COMP2011_QUOTA = 320;
    const float STUDENT_2_PROF_RATIO = 100.0;
    const float STUDENT_2_TA_RATIO = 40.0;
    const float STUDENT_2_ROOM_RATIO = 100.0;
    
    cout << "COMP2011 requires "
         << ceil(COMP2011_QUOTA/STUDENT_2_PROF_RATIO) 
         << " instructors, "
         << ceil(COMP2011_QUOTA/STUDENT_2_TA_RATIO) 
         << " TAs, and "
         << ceil(COMP2011_QUOTA/STUDENT_2_ROOM_RATIO) 
         << " classrooms" << endl;

    return 0;
}
