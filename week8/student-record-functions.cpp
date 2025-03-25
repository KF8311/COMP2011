/* File: student-record-functions.cpp */
#include <cstring>
#include "student-record.h"

void print_date(const Date& date) 
{ 
    cout << date.year << '/' << date.month << '/' << date.day << endl; 
}

void print_student_record(const Student_Record& x) 
{
    cout.width(12); cout << "name: " << x.name << endl;
    cout.width(12); cout << "id: " << x.id << endl;
    cout.width(12); cout << "gender: " << x.gender << endl;
    cout.width(12); cout << "dept: " << dept_name[x.dept] << endl;
    cout.width(12); cout << "entry date: "; print_date(x.entry);
}








void init_date(Date& x, unsigned int year,
               unsigned int month, unsigned int day) 
{
    x.year = year;
    x.month = month; 
    x.day = day; 
}

void init_student_record(Student_Record& a, const char name[],
                         unsigned int id, char gender,
                         Dept dept, const Date& date) 
{
    strcpy(a.name, name);
    a.id = id;
    a.gender = gender;
    a.dept = dept;
    a.entry = date;     // struct-struct assignment
}
