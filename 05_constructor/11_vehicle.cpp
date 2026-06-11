

#include <iostream>
#include <vector>

using namespace std;

class Vehicle
{
private:
    string vehicle_name;
    int vehicle_id;
    string vehicle_type;
    float vehicle_price;

public:
    // Default Constructor
    Vehicle()
    {
        vehicle_name = "Not Set";
        vehicle_id = 0;
        vehicle_type = "Not Set";
        vehicle_price = 0.0;
    }

    // Parameterized Constructor
    Vehicle(string name, int id, string type, float price)
    {
        vehicle_name = name;
        vehicle_id = id;
        vehicle_type = type;
        vehicle_price = price;
    }

    // Copy Constructor
    Vehicle(const Vehicle &v)
    {
        vehicle_name = v.vehicle_name;
        vehicle_id = v.vehicle_id;
        vehicle_type = v.vehicle_type;
        vehicle_price = v.vehicle_price;
    }

    int getId() const
    {
        return vehicle_id;
    }

    void display() const
    {
        cout << "Vehicle ID    : " << vehicle_id << endl;
        cout << "Vehicle Name  : " << vehicle_name << endl;
        cout << "Vehicle Type  : " << vehicle_type << endl;
        cout << "Vehicle Price : " << vehicle_price << endl;
    }

    // Destructor
    ~Vehicle()
    {
        cout << "Destructor Called" << endl;
    }
};

class VehicleRecordManager
{
private:
    vector<Vehicle> vehicles;

public:
    void addVehicle(const Vehicle &v)
    {
        vehicles.push_back(v);
        cout << "Vehicle Added Successfully" << endl;
    }

    void displayAllVehicles()
    {
        if (vehicles.empty())
        {
            cout << "No Vehicle Records Found." << endl;
            return;
        }

        for (int i = 0; i < vehicles.size(); i++)
        {
            vehicles[i].display();
        }
    }

    void searchById(int id)
    {
        for (int i = 0; i < vehicles.size(); i++)
        {
            if (vehicles[i].getId() == id)
            {
                cout << "\nVehicle Found\n";
                vehicles[i].display();
                return;
            }
        }

        cout << "Vehicle Not Found." << endl;
    }
};

int main()
{
    VehicleRecordManager admin;

    int n;

    cout << "Enter Number of Vehicles: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string name, type;
        int id;
        float price;

        cout << "\nEnter Details of Vehicle " << i + 1 << endl;

        cout << "Vehicle Name: ";
        cin >> name;

        cout << "Vehicle ID: ";
        cin >> id;

        cout << "Vehicle Type: ";
        cin >> type;

        cout << "Vehicle Price: ";
        cin >> price;

        Vehicle v(name, id, type, price);

        admin.addVehicle(v);
    }

    cout << "\nAll Vehicle Records\n";
    admin.displayAllVehicles();

    int searchId;

    cout << "\nEnter Vehicle ID to Search: ";
    cin >> searchId;

    admin.searchById(searchId);

    return 0;
}