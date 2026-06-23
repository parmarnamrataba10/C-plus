

#include <iostream>
using namespace std;

class Num
{

public:
    int num;

    Num(int n)
    {

        num = n;
    }

    void display()
    {

        cout << "total is " << num << endl;
    }

    // syntax of returntype operator

    void operator++()
    {

        ++num;
    }
};

int main()
{

    Num n1(31);

    cout << " before " << endl;

    n1.display();

    cout << " after " << endl;

    ++n1;

    n1.display();

    return 0;
}