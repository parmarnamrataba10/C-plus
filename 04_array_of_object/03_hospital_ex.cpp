

#include <iostream>

using namespace std;

class Hospital
{

private:
    int hospital_id;
    string hospital_name;
    string hospital_type;
    int hospital_rating;
    string hospital_location;
    int hospital_establish_year;
    int hospital_staff_quantity;
    int hospital_bed_quantity;

    static int hospitalCount;

public:
    void setHospitalDetails()
    {

        cout << "enter hospital id " << endl;
        cin >> hospital_id;
        cin.ignore();

        cout << "enter hospital name " << endl;
        getline(cin, hospital_name);

        cout << "enter hospital type " << endl;
        getline(cin, hospital_type);

        cout << "enter hospital rating " << endl;
        cin >> hospital_rating;
        cin.ignore();

        cout << "enter hospital location " << endl;
        getline(cin, hospital_location);

        cout << "enter hospital establish year " << endl;
        cin >> hospital_establish_year;
        cin.ignore();

        cout << "enter hospital staff quantity " << endl;
        cin >> hospital_staff_quantity;
        cin.ignore();

        cout << "enter hospital bed quantity " << endl;
        cin >> hospital_bed_quantity;
        cin.ignore();

        hospitalCount++;
    }

    void getHospitalDetails()
    {

        cout << "hospital id             " << hospital_id << endl;
        cout << "hospital name           " << hospital_name << endl;
        cout << "hospital type           " << hospital_type << endl;
        cout << "hospital rating         " << hospital_rating << endl;
        cout << "hospital location       " << hospital_location << endl;
        cout << "hospital establish year " << hospital_establish_year << endl;
        cout << "hospital staff quantity " << hospital_staff_quantity << endl;
        cout << "hospital bed quantity   " << hospital_bed_quantity << endl;
    }

    static void getHospitalCount()
    {

        cout << "hospital count " << hospitalCount << endl;
    }
};

int Hospital :: hospitalCount = 0;

int main()
{

    cout << "enter a size of an array " << endl;
    int n;
    cin >> n;

    Hospital arr[n];

    for (int i = 0; i < n; i++)
    {

        arr[i].setHospitalDetails();
    }

    for (int i = 0; i < n; i++)
    {

        arr[i].getHospitalDetails();
    }

    Hospital::getHospitalCount();

    return 0;
}