#include <iostream> /* File: student-record-ptr.cpp */
#include "student-record.h"
using namespace std;

void print_date(const Date* date) 
{
    cout << date->year << '/' << (int)date->month << '/' << date->day << endl;
}

void print_student_record(const Student_Record* const x)
{
    cout << "name:\t\t" << x->name << endl;
    cout << "id:\t\t" << x->id << endl;
    cout << "gender:\t\t" << (char)x->gender << endl;
    cout << "dept:\t\t" << (int)x->dept << endl;
    cout << "entry date:\t"; print_date(&x->entry);
}

int main()
{
    Student_Record a = { "Adam", 12345, MALE, CSE, { 2006 , SEP , 1 } };
    print_student_record(&a);
    return 0;
}
