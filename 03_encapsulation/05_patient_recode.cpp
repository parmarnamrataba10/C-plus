

#include<iostream>

using namespace std;

class Patient{

private:
    int patient_id;
    string patient_name;
    int patient_age;
    string patient_gender;
    string patient_disease;
    string patient_city;
    string patient_contact_number;

public:

void setpatientdetails(int id, string name, int age, string gender, string disease, string city, string contact)
{
    patient_id = id;
    patient_name = name;
    patient_age = age;
    patient_gender = gender;
    patient_disease = disease;
    patient_city = city;
    patient_contact_number = contact;
}

void getpatientdetails()
{
    cout<<"Patient ID : "<<patient_id<<endl;
    cout<<"Patient Name : "<<patient_name<<endl;
    cout<<"Patient Age : "<<patient_age<<endl;
    cout<<"Patient Gender : "<<patient_gender<<endl;
    cout<<"Patient Disease : "<<patient_disease<<endl;
    cout<<"Patient City : "<<patient_city<<endl;
    cout<<"Patient Contact Number : "<<patient_contact_number<<endl;
}

};

int main()
{
    Patient p1;
    p1.setpatientdetails(101,"Rahul",25,"Male","Fever","Rajkot","9876543210");
    p1.getpatientdetails();
    cout<<endl;

    Patient p2;
    p2.setpatientdetails(102,"Priya",22,"Female","Cold","Surat","9876543211");
    p2.getpatientdetails();
    cout<<endl;

    Patient p3;
    p3.setpatientdetails(103,"Amit",30,"Male","Malaria","Ahmedabad","9876543212");
    p3.getpatientdetails();
    cout<<endl;

    Patient p4;
    p4.setpatientdetails(104,"Nisha",28,"Female","Typhoid","Vadodara","9876543213");
    p4.getpatientdetails();
    cout<<endl;

    Patient p5;
    p5.setpatientdetails(105,"Karan",35,"Male","Cough","Mumbai","9876543214");
    p5.getpatientdetails();
    cout<<endl;

    return 0;
}