

#include <iostream>
using namespace std;

int main()
{

    //deep copy//

    int a = 24;
    int b = a;

    cout << " value of a " << a << endl;
    cout << " value of b " << b << endl;

    b = 50;

    //after changeing b value //

    cout << " value of a " << a << endl;
    cout << " value of b " << b << endl;

    //shallow copy//

    int c = 48;
    int &d = c;



    cout << " value of c " << c << endl;
    cout << " value of d " << d << endl;

    d = 100;

    // after changeing d value //

    cout << " value of c " << c << endl;
    cout << " value of d " << d << endl;

    return 0;

}