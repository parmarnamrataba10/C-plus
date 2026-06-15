


#include <iostream>

using namespace std;

class Parent
{
public:
    string property = "4 bhk";

    void getHome()
    {

        cout << property << " home " << endl;
    }
};

class Child : public Parent
{
public:
    int NumberOfVehicle = 4;

    void TotalVehicle()
    {

        cout << "number of vehicle is " << NumberOfVehicle << endl;
    }
};

int main()
{

    Child c;

    c.getHome();
    c.TotalVehicle();

    return 0;
}