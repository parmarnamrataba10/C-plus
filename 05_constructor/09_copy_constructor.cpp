

#include <iostream>

using namespace std;

class Student
{

private:
    string name;
    string course;

public:
    Student()
    {

        name = "alice";
        course = "fsd";
    }

    Student(Student &s)
    {

        name = s.name;
        course = s.course;
    }

    void displayStudentDetail()
    {

        cout << "Student name is   " << name << endl;
        cout << "Student course is " << course << endl;
    }
};

int main()
{

    Student s1;

    Student s2 = s1;

    // s1.displayStudentDetail();

    s2.displayStudentDetail();

    return 0;
}