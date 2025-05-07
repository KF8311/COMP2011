#include "classroom.h"

//====================
// Task 1: Implement the constructor
//  Copy ID and q to room_ID and capacity, respectively
//  Set num_app and num_exams to 0
//
// Add your code here




//====================
// Task 2: Implement the destructor
//
// Add your code here





//===================
// Implementation of the accessor functions
// B.M.
void Classroom::print_timetable() const
{
    cout << "========================================" << endl;
    cout << "Exam Time Table of " << room_ID << endl;
    cout << "========================================" << endl;
    cout << left;
    cout << "    ";
    cout.width(12); cout << "Course ID";
    cout.width(35); cout << "Course Name";
    cout.width(16); cout << "   Exam Time";
    cout << "#Students" << endl;

    for (int i=0; i<num_exams; i++)
    {
        const Course& c = courses[exam_list[i]];
        cout << left;
        cout.width(4); cout << i;
        cout.width(12); cout << c.get_course_ID();
        cout.width(35); cout << c.get_course_name();
        cout.width(6); cout << right << c.get_start_time() << " -- ";
        cout.width(6); cout << left << c.get_end_time();
        cout.width(5); cout << right << c.get_num_stu() << endl;
    }
    cout <<"========================================" << endl;
    cout <<"Number of (Valid) Applications: " << num_app << endl;
    cout <<"Number of Exams: " << num_exams << endl;
}

// Task 3: Implement the member function receive_app()
//  If the number of students (num_stu) is less than or equal to the capacity of the classroom 
//  and the number of applications has not exceeded the MAX_COURSES,
//  add the given details to the courses array and increment num_app.
//  Otherwise, do nothing.
//
//  Add your code here







// Task 4: Implement the member function gen_time_table() using the greedy algorithm
//  Step 1: Sort the courses according to the courses' end_time
//  Step 2: From the beginning of sorted courses,
//          if a course (in chronological_order) has no time conflicts with those courses already added in exam_list,
//          add it to exam_list and increment num_exams 
void Classroom::gen_timetable() 
{
    // Store the indexes of the courses 
    int chronological_order[MAX_COURSES];
    for (int i=0; i<num_app; i++)
       chronological_order[i] = i;

    // Step 1: sort the indexes according to the end_time of the corresponding courses
    for (int i=1;i<num_app;i++)
    {
        for (int j=0; j<i; j++)
        {
            int end_i = courses[chronological_order[i]].get_end_time();
            int end_j = courses[chronological_order[j]].get_end_time();
            if (end_j > end_i)
            {
                int temp = chronological_order[i];
                chronological_order[i] = chronological_order[j];
                chronological_order[j] = temp;
            }
        }
    }

    // Step 2
    // Add your code here








}
