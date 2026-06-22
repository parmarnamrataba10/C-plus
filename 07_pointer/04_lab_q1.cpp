

#include <iostream>
using namespace std;

// Base Class
class Employee
{
protected:
    int emp_id;
    string emp_name;
    int emp_age;
    double emp_salary;

public:
    Employee(int id, string name, int age, double salary)
    {
        emp_id = id;
        emp_name = name;
        emp_age = age;
        emp_salary = salary;
    }

    virtual void display()
    {
        cout << "\nEmployee ID       : " << emp_id;
        cout << "\nEmployee Name    : " << emp_name;
        cout << "\nEmployee Age     : " << emp_age;
        cout << "\nEmployee Salary  : " << emp_salary;
    }

    virtual ~Employee()
    {
    }
};

// Derived Class1 - Full Time Employee
class FullTimeEmployee : public Employee
{
private:
    float bonus;

public:
    FullTimeEmployee(int id, string name, int age, double salary, float bonus) : Employee(id, name, age, salary)
    {
        this->bonus = bonus;
    }

    void display() override
    {

        Employee::display();

        cout << "\nEmployee Bonus  : " << bonus << endl;
    }
};

// Derived Class2 - Part Time Employee
class PartTimeEmployee : public Employee
{
private:
    int hours_worked;

public:
    PartTimeEmployee(int id, string name, int age, double salary, int working_hours) : Employee(id, name, age, salary)
    {

        hours_worked = working_hours;
    }

    void display() override
    {
        Employee::display();

        cout << "\n Employee Hours Worked: " << hours_worked << endl;
    }
};

int main()
{
    Employee *employees[100];

    int choice;
    int count = 0;

    do
    {

        cout << "\n---Employee management system ---" << endl;

        cout << "1.Add Employee " << endl;
        cout << "2. Display all Employees " << endl;
        cout << "3.Delete Employee " << endl;
        cout << "4.Exit " << endl;

        cout << "Enter your choice from above menu :- ";
        cin >> choice;

        if (choice == 1)
        {

            int type;

            cout << "1. Full-time Employee " << endl;
            cout << "2. part-time Employee " << endl;

            cin >> type;

            int id, age, salary;
            string name;

            cout << "Enter Employee Id :- ";
            cin >> id;
            cin.ignore();

            cout << "Enter Employee name :- ";
            getline(cin, name);

            cout << "Enter Employee age :- ";
            cin >> age;
            cin.ignore();

            cout << "Enter Employee salary :-";
            cin >> salary;
            cin.ignore();

            if (type == 1)
            {

                int bonus;

                cout << "\n Enter Employee bonus :- ";
                cin >> bonus;

                employees[count] = new FullTimeEmployee(id, name, age, salary, bonus);
                count++;
            }
            else if (type == 2)
            {

                int hours;

                cout << " \n enter Working hours of Employee :-";
                cin >> hours;

                employees[count] = new PartTimeEmployee(id, name, age, salary, hours);
                count++;
            }
        }
        else if (choice == 2)
        {

            if (count == 0)
            {

                cout << "  No Employee data found " << endl;
            }
            else
            {

                for (int i = 0; i < count; i++)
                {

                    employees[i]->display();
                }
            }
        }

        else if (choice == 3)
        {

            int index;

            cout << " enter index to delete " << "from 0 to " << count - 1 << endl;
            cin >> index;

            if (index >= 0 && index < count)
            {

                for (int i = index; i < count - 1; i++)
                {

                    employees[i] = employees[i + 1];
                }

                count--;

                cout << " employee Data deleted " << endl;
            }
            else
            {

                cout << " invalid index " << endl;
            }
        }
        else if (choice == 4)
        {

            cout << " Exiting...." << endl;
        }
    } while (choice != 4);

    for (int i = 0; i < count; i++)
    {

        delete employees[i];

        cout << "memory free " << endl;
    }

    return 0;
}