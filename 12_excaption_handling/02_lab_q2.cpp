

#include <iostream>
using namespace std;

int main()
{

    int age;

    cout << " enter your age ";
    cin >> age;

    try
    {

        if (age < 18)
        {

            throw "The person is not eligible ";
        }
        cout << "your age is " << age << " valid age for voting " << endl;
    }

    catch (char const *msg)
    {

        cout << msg << endl;
    }

    return 0;
}