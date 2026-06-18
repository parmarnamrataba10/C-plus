

#include <iostream>

using namespace std;

// compiler or also called as method of overloading //

class ArithMetic
{

public:
    void calculate(int a, int b)
    {

        cout << "Division is " << a / b << endl;
    };

    void calculate(int a, int b, int c)
    {

        cout << "substraction is " << a - b - c << endl;
    };

    void calculate(int a, int b, int c, int d)
    {

        cout << "multiplication is " << a * b * c * d << endl;
    };

    void calculate(int a, int b, int c, int d, int e)
    {

        cout << "Addition is " << a + b + c + d + e << endl;
    };
};

int main()
{

    ArithMetic a;

    a.calculate(15,20);
    a.calculate(50,30,10);
    a.calculate(4,2,3,5);
    a.calculate(5,4,3,2,1);

    return 0;
}