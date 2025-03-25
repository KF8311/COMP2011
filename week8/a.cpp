#include <iostream>     /* File: student-record-rbv.cpp */
using namespace std;
#include "student-record-functions.cpp"

Student_Record smaller_id(Student_Record& x, Student_Record& y)
{
    return (x.id < y.id) ? x : y;
}

int main() /* To allow student will smaller ID to transfer to CSE */
{
    Student_Record a = { "Amy", 12000, 'F', MATH, { 2006, 1, 10 } };
    Student_Record b = { "Bob", 11000, 'M', MATH, { 2005, 9, 21 } };

    cout << "<<< Before changing department >>>" << endl; 
    print_student_record(a); print_student_record(b);
    smaller_id(a, b).dept = CSE;

    cout << "\n\n<<< After changing department >>>" << endl; 
    print_student_record(a); print_student_record(b);
    return 0;
}
