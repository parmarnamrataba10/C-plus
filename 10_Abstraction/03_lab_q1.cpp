

#include <iostream>
using namespace std;

class Admin
{

protected:
    int manager_salary;
    int employee_salary;

private:
    double total_revenue;
    bool can_terminate;

public:
    int total_staff;
    string company_name;

    // constructor

    Admin()
    {

        company_name = "xyz";
        manager_salary = 10000;
        employee_salary = 5000;
        total_staff = 10;
        total_revenue = 100000;
        can_terminate = true;
    }

    // display details

    virtual void myAccess()
    {

        cout << "\n=========admin access========" << endl;
        cout << "company Name " << company_name << endl;
        cout << "manager salary " << manager_salary << endl;
        cout << "employee salary " << employee_salary << endl;
        cout << "total staff " << total_staff << endl;
        cout << "total revenue " << total_revenue << endl;
        cout << "can terminate employee " << can_terminate << endl;
    }
};

class Manager : protected Admin
{

public:
    void myAccess() override
    {

        cout << "\n========= manager access========" << endl;
        cout << "company Name " << company_name << endl;
        cout << "manager salary " << manager_salary << endl;
        cout << "employee salary " << employee_salary << endl;
        cout << "total staff " << total_staff << endl;

        // i can't access admin private attribute

        // cout << "total revenue " << total_revenue << endl;
        // cout << "can terminate employee " << can_terminate << endl;
    }
};

class Employee : protected Manager
{

public:
    void myAccess() override
    {

        cout << "\n=========== Employee access =========" << endl;
        cout << "company Name " << company_name << endl;
        cout << "employee salary " << employee_salary << endl;
        cout << "total staff " << total_staff << endl;

        //  i can't access admin and manager private attribute

        // cout << "total revenue " << total_revenue << endl;
        // cout << "can terminate employee " << can_terminate << endl;
    }
};

int main()
{

    // admin instance
    Admin obj;

    obj.myAccess();

    // manager instance

    Manager m;

    m.myAccess();

    // Employee instance

    Employee e;

    e.myAccess();

    return 0;
}