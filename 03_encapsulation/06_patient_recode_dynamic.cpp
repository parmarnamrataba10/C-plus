

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

    void setpatientdetails(){

        cout<<"Enter Patient ID : ";
        cin>>patient_id;
        cin.ignore();

        cout<<"Enter Patient Name : ";
        getline(cin,patient_name);

        cout<<"Enter Patient Age : ";
        cin>>patient_age;
        cin.ignore();

        cout<<"Enter Patient Gender : ";
        getline(cin,patient_gender);

        cout<<"Enter Patient Disease : ";
        getline(cin,patient_disease);

        cout<<"Enter Patient City : ";
        getline(cin,patient_city);

        cout<<"Enter Patient Contact Number : ";
        getline(cin,patient_contact_number);
    }

    void getpatientdetails(){

        cout<<"Patient ID : "<<patient_id<<endl;
        cout<<"Patient Name : "<<patient_name<<endl;
        cout<<"Patient Age : "<<patient_age<<endl;
        cout<<"Patient Gender : "<<patient_gender<<endl;
        cout<<"Patient Disease : "<<patient_disease<<endl;
        cout<<"Patient City : "<<patient_city<<endl;
        cout<<"Patient Contact Number : "<<patient_contact_number<<endl;
    }
};

int main(){

    Patient p[5];

    for(int i=0;i<5;i++){

        cout<<"Entering Patient Details "<<i+1<<endl;

        p[i].setpatientdetails();
    }

    for(int i=0;i<5;i++){

        cout<<"Entered Patient Details "<<i+1<<endl;

        p[i].getpatientdetails();
    }

    return 0;
}