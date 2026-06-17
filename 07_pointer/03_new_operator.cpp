

#include <iostream>
using namespace std;

class Car
{

public:
    string brandName;

    void CarDetails()
    {

        cout << "this car's brand is " << brandName << endl;
    }
};

int main()
{

    Car c;

    Car *vehicle = new Car;

    vehicle->brandName = "BMW";
    vehicle->CarDetails();

    delete vehicle;

    return 0;
}