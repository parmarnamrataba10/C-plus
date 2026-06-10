

#include <iostream>

using namespace std;

class School
{

private:
    int school_id;
    string school_name;
    string school_type;
    int school_rating;
    string school_location;
    int school_establish_year;
    int school_staff_quantity;
    int school_student_quantity;

    static int schoolCount;

public:
    void setSchoolDetails()
    {

        cout << "enter school id " << endl;
        cin >> school_id;
        cin.ignore();

        cout << "enter school name " << endl;
        getline(cin, school_name);

        cout << "enter school type " << endl;
        getline(cin, school_type);

        cout << "enter school rating " << endl;
        cin >> school_rating;
        cin.ignore();

        cout << "enter school location " << endl;
        getline(cin, school_location);

        cout << "enter school establish year " << endl;
        cin >> school_establish_year;
        cin.ignore();

        cout << "enter school staff quantity " << endl;
        cin >> school_staff_quantity;
        cin.ignore();

        cout << "enter school student quantity " << endl;
        cin >> school_student_quantity;
        cin.ignore();

        schoolCount++;
    }

    void getSchoolDetails()
    {

        cout << "school id               : " << school_id << endl;
        cout << "school name             : " << school_name << endl;
        cout << "school type             : " << school_type << endl;
        cout << "school rating           : " << school_rating << endl;
        cout << "school location         : " << school_location << endl;
        cout << "school establish year   : " << school_establish_year << endl;
        cout << "school staff quantity   : " << school_staff_quantity << endl;
        cout << "school student quantity : " << school_student_quantity << endl;
    }

    static void getSchoolCount()
    {

        cout << "school count " << schoolCount << endl;
    }
};

int School :: schoolCount = 0;

int main()
{

    cout << "enter a size of an array " << endl;
    int n;
    cin >> n;

    School arr[n];

    for (int i = 0; i < n; i++)
    {

        arr[i].setSchoolDetails();
    }

    for (int i = 0; i < n; i++)
    {

        arr[i].getSchoolDetails();
    }

    School::getSchoolCount();

    return 0;
}