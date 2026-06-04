


#include<iostream>

using namespace std;

class Car
{
public:

    int car_id;
    string car_company_name;
    string car_color;
    string car_model;
    int car_release_year;

    void setcardetails(int id, string company, string color,string model, int year)
    {
        car_id = id;
        car_company_name = company;
        car_color = color;
        car_model = model;
        car_release_year = year;
    }

    void getcardetails()
    {
        cout << "car id : " << car_id << endl;
        cout << "car company name : " << car_company_name << endl;
        cout << "car color : " << car_color << endl;
        cout << "car model : " << car_model << endl;
        cout << "car release year : " << car_release_year << endl;
    }
};

int main()
{
    Car c1;

    c1.setcardetails(101,"Maruti","White","Swift",2022);

    c1.getcardetails();
    cout << endl;

    Car c2;

    c2.setcardetails(102,"Hyundai","Black","Creta",2023);

    c2.getcardetails();
    cout << endl;

    Car c3;

    c3.setcardetails(103,"Tata","Red","Nexon",2021);

    c3.getcardetails();
    cout << endl;

    Car c4;

    c4.setcardetails(104,"Honda","Blue","City",2024);

    c4.getcardetails();
    cout << endl;

    return 0;
}