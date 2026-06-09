
#include<iostream>

using namespace std;

class Cafe{

    private:
        int cafe_id;
    string cafe_name;
    string cafe_type;
    string cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;



    public:
    Cafe(){

          cout << "Enter cafe id ";
        cin >> cafe_id;
        cin.ignore();

        cout << "enter cafe name ";
        getline(cin, cafe_name);

        cout << "enter cafe type ";
        getline(cin, cafe_type);

        cout << "enter cafe rating ";
        getline(cin, cafe_rating);

        cout << "enter cafe location ";
        getline(cin, cafe_location);

        cout << "Enter cafe establish year ";
        cin >> cafe_establish_year;
        cin.ignore();

        cout << "Enter cafe staff quantity ";
        cin >> cafe_staff_quantity;
        cin.ignore();

        cout<<endl;
    };

     void DisplayCafeDetails()
    {

        cout << "cafe id             : " << cafe_id << endl;
        cout << "cafe name           : " << cafe_name << endl;
        cout << "cafe type           : " << cafe_type << endl;
        cout << "cafe rating         : " << cafe_rating << endl;
        cout << "cafe location       : " << cafe_location << endl;
        cout << "cafe establish year : " << cafe_establish_year << endl;
        cout << "cafe staff quantity : " << cafe_staff_quantity << endl;
    }
};


int main (){


cout << "number of cafe : ";
int n;
cin >> n;

Cafe *arr[n];

for (int i = 0; i < n; i++)
{
    arr[i] = new Cafe();
}

for (int i = 0; i < n; i++)
{
    arr[i]->DisplayCafeDetails();
    cout << endl;
}
    return 0;

}