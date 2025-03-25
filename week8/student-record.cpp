#include <iostream>     /* File: student-record.cpp */
#include "student-record.h"
using namespace std;

void print_date(const Date& date) { 
    cout << date.year << '/' << date.month << '/' << date.day << endl; 
}

void print_student_record(const Student_Record& x) {
    cout.width(12); cout << "name: " << x.name << endl;
    cout.width(12); cout << "id: " << x.id << endl;
    cout.width(12); cout << "gender: " << x.gender << endl;
    cout.width(12); cout << "dept: " << dept_name[x.dept] << endl;
    cout.width(12); cout << "entry date: "; print_date(x.entry);
}

int main() 
{
    Student_Record a = { "Adam", 12345, 'M', CSE, { 2006, 9, 1 } };
    print_student_record(a); return 0;
}
