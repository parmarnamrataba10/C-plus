

#include <iostream>

using namespace std;

// run-time or also called as method of overriding //

class Cricket
{

public:
    virtual void totalOver()
    {

        cout << " totalovers are  :" << endl;
    }
};

class T20Match : public Cricket
{

public:
    void totalOver()
    {

        cout << "T20  has 20 over " << endl;
    }
};
class TestMatch : public Cricket
{

public:
    void totalOver()
    {

        cout << "Test match has 90+ over " << endl;
    }
};
int main()
{
    Cricket *c;

    T20Match t20;

    c = &t20;

    c->totalOver();

    TestMatch tm;

    c = &tm;

    c->totalOver();

    return 0;
}