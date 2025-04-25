#include <cstring>	/* File: student-record.h */
const int MAX_NAME_LEN = 32;

class student_record
{
  private:
    char gender;
    unsigned int id;
    char name[MAX_NAME_LEN];

  public:
    // ACCESSOR member functions: const => won't modify data members
    char get_gender() const { return gender; }
    unsigned int get_id() const { return id; }
    void print() const
         { cout << name << endl << id << endl << gender << endl; }

    // MUTATOR member functions
    void set(const char my_name[], unsigned int my_id, char my_gender)
         { strcpy(name, my_name); id = my_id; gender = my_gender; }
    void copy(const student_record& r) { set(r.name, r.id, r.gender); }
};
