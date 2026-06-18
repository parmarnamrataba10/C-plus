

#include <iostream>

using namespace std;

class Employee
{

public:
    virtual void work()
    {
        cout << "Employees takes " << endl;
    }
};


class Designer : public Employee
{

public:
    void work() override
    {

        cout << "designer is designing " << endl;
    }
};

class Developer : public Employee
{

public:
    void work() override
    {

        cout << "Developer is Developing " << endl;
    }
};

int main()
{

    Employee *emp;

    Designer dg;

    emp = &dg;
    emp->work();

     Developer d;

    emp = &d;
    emp->work();

    return 0;
}