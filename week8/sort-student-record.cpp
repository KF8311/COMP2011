#include <iostream>     /* File: sort-student-record.cpp */
using namespace std;
#include "student-record-functions.cpp"

void swap_SR(Student_Record& x, Student_Record& y) {
    Student_Record temp = x; x = y; y = temp;
}
void sort_3SR_by_id(Student_Record sr[]) {
    // What does the following print?
    cout << "#records = " << sizeof(sr)/sizeof(Student_Record) << endl;
    if (sr[0].id > sr[1].id) swap_SR(sr[0], sr[1]);
    if (sr[0].id > sr[2].id) swap_SR(sr[0], sr[2]);
    if (sr[1].id > sr[2].id) swap_SR(sr[1], sr[2]);
}
    
int main() {
    Student_Record sr[] = {
        { "Adam",  12000, 'M', CSE,  { 2006, 1, 10 } },
        { "Bob",   11000, 'M', MATH, { 2005, 9, 16 } },
        { "Cathy", 10000, 'F', ECE,  { 2006, 8, 27 } } };
    sort_3SR_by_id(sr);
    for (int j = 0; j < sizeof(sr)/sizeof(Student_Record); j++)
        print_student_record(sr[j]);
    return 0;
}
