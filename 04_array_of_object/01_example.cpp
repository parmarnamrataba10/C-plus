


#include <iostream>

using namespace std;

class car
{

public:
    string Name;
    string CompanyName;

    void setCarDetails()
    {

        cout << "enter car name : " << endl;
        getline(cin, Name);

        cout << "enter car company name : " << endl;
        getline(cin, CompanyName);
    }

    void getCarDetails()
    {

        cout << "Car name " << Name << endl;
        cout << "company name " << CompanyName << endl;
    }
};
int main()
{

    cout << "enter size of an array ";
    int n;

    cin >> n;
    cin.ignore();

    car arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i].setCarDetails();
    }

    for (int i = 0; i < n; i++)
    {
        arr[i].getCarDetails();
    }

    return 0;
}