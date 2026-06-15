

#include <iostream>
using namespace std;

class Employee
{

public:
    void salary()
    {

        cout << "they have salary  " << endl;
    }
};

class Manager : public Employee
{

public:
    void managingTeam()
    {

        cout << " manager has a managing team " << endl;
    }
};
class Developer : public Employee
{

public:
    void developing()
    {

        cout << "Developer has to develop a web" << endl;
    }
};

class Designer : public  Employee 
{

public:
   void designing()
   {
     cout<<"  Designer is designing aa masterpic "<<endl;

   }

};

int main()
{
    Employee e;

    e.salary();

    Manager m;

    m.managingTeam();
    m.salary();

    Developer d;

    d.developing();
    d.salary();

    Designer dg;

    dg.designing();
    dg.salary();

    return 0;
}