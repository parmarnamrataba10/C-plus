
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

        cout << "total " << num << endl;
    }
};

int main()
{

    Num n1(20);

    Num n2(30);

    // this will not work and will show error because in class you can not perform  operation using operators for that we have to use operator overloading


    // cout << "total " << n1 + n2 << endl;

    return 0;
}