

#include <iostream>
using namespace std;

class X
{

public:

    int num1 = 10;

private:

    int num2 = 20;

protected:


    int num3 = 30;

    void display()
    {

        cout << "num1 is " << num1 << endl;

        cout << "num2 is " << num2 << endl;

        cout << "num3 is " << num3 << endl;
    }
};

class Y : public X
{

public:

    void display()
    {


    }
};
int main()
{

    X  obj;

    // (public)

    cout << "num1 is " << obj.num1 << endl; 

    

    // private 
    
    // can't be accessed in derived class


    // cout << "num2 is " << num2 << endl;

    // protected 
    
    // can't be accessed in derived class


    // cout << "num3 is " << obj.num3 << endl; 

    

    return 0;
}