
#include <iostream>
#include <string>
using namespace std;


class Employee
{
protected:
    int employee_id;
    string name;
    int age;
    float salary;

public:
    Employee()
    {
        employee_id = 0;
        name = "";
        age = 0;
        salary = 0;
    }

    virtual void input()
    {
        cout << "Enter Employee ID: ";
        cin >> employee_id;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    virtual void display()
    {
        cout << " Employee ID : " << employee_id<<endl;
        cout << " Name        : " << name<<endl;
        cout << " Age         : " << age<<endl;
        cout << " Salary      : " << salary<<endl;
    }

    virtual ~Employee()
    {
    }
};


class FullTimeEmployee : public Employee
{
private:
    float bonus;

public:
    void input()
    {

        cout << "Enter Bonus: ";
        cin >> bonus;
    }

    void display()
    {

        cout << "Bonus" << bonus << endl;
    }
};

class PartTimeEmployee : public Employee
{
private:
    int hours_worked;

public:
    void input()
    {

        cout << "Enter Hours Worked: ";
        cin >> hours_worked;
    }

    void display()
    {

        cout << "Hours Worked" << hours_worked << endl;
    }
};

int main()
{

    return 0;
}