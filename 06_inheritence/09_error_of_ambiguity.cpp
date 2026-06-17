
#include <iostream>

using namespace std;

class A
{

public:
    void show()
    {

        cout << " this is class A show " << endl;
    }
};
class B
{

public:
    void show()
    {

        cout << " this is class B show " << endl;
    }
};
class C : public B, public A
{

public:
    void show()
    {

        cout << " this is class C show " << endl;
    }
};
int main()
{

    C c;

    c.A::show();
    c.B::show();
    c.C::show();




    return 0;
}