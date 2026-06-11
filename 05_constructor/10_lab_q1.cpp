



#include <iostream>
#include <vector>
using namespace std;

class Student
{

private:
    string student_name;
    int student_rollNo;
    float GPA;

public:
    // default constructor

    Student()
    {

        student_name = "not set";
        student_rollNo = 0;
        GPA = 0.0;

        cout << "default constructor called " << endl;
    }

    // parameterized constructor
    
    Student(string name, int rollNo, float gpa)
    {
        student_name = name;
        student_rollNo = rollNo;
        GPA = gpa;

        cout << "parameterized constructor called " << endl;
        
    };

    // copy constructor

    Student(const Student &s)
    {

        student_name = s.student_name;
        student_rollNo = s.student_rollNo;
        GPA = s.GPA;

        cout << "copy constructor called " << endl;

    }

    void studentName()
    {

        cout << "student name is " << student_name << endl;
    }

    int rollNo()
    {

        return student_rollNo;
    }

    float gpa()
    {

        return GPA;
    }

    void display() const
    {

        cout << "Name    : " << student_name << endl;
        cout << "Roll No : " << student_rollNo << endl;
        cout << "GPA     : " << GPA << endl;
   
    }

    //destructor 

    ~Student()
    {

        cout << "destructor  called" << endl;
      
    }
};
class StudentRecordManager
{

private:
    vector<Student> students;

public:
    void addStudent(const Student &s)
    {

        students.push_back(s);

        cout << "student data added " << endl; 
    }

    void displayAllStudentData()
    {

        for (int i = 0; i < students.size(); i++)
        {

            if (students.empty())
            {

                cout << "no student data found " << endl;
                return;
            }
            else
            {
                students[i].display();
            }
        }
    }

    void SearchByRollNo(int rollNumber)
    {

        for (int i = 0; i < students.size(); i++)
        {

            if (students[i].rollNo() == rollNumber)

            {

                cout << "student found with this roll no " << endl;
                students[i].display();
                return;
            }
            else
            {

                cout << "student with this roll no not found " << endl;

                return;
            }
        }
    }
};
int main()
{

    Student s;

    Student s1("alice", 1, 8);
    Student s2("Raj", 2, 9);


    Student s3 = s1;

    StudentRecordManager admin;

    admin.addStudent(s1);
    admin.addStudent(s2);

    cout << "all students data " << endl;

    admin.displayAllStudentData();

    admin.SearchByRollNo(1);
    admin.SearchByRollNo(31);

    return 0;
}