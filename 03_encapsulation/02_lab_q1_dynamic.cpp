

#include<iostream>

using namespace std;

class student{


private:
   int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_email;
    string stu_college;

    public:

    void setstudentdetails(){

        cout<<"enter student id : ";
        cin>>stu_id;
        cin.ignore();

        cout<<"enter student name : ";
        getline(cin,stu_name);

        cout<<"enter student age : ";
        cin>>stu_age;
        cin.ignore();

        cout<<"enter student course : ";
        getline(cin,stu_course);

        cout<<"enter student city : ";
        getline(cin,stu_city);

        cout<<"enter student email : ";
        getline(cin,stu_email);
        
        cout<<"enter student college : ";
        getline(cin,stu_college);

    }
    
    void getstudentdetails(){


    cout<<"Student ID : "<<stu_id<<endl;
    cout<<"Student Name : "<<stu_name<<endl;
    cout<<"Student Age : "<<stu_age<<endl;
    cout<<"Student Course : "<<stu_course<<endl;
    cout<<"Student City : "<<stu_city<<endl;
    cout<<"Student Email : "<<stu_email<<endl;
    cout<<"Student College : "<<stu_college<<endl;


    }

};

int main(){

student s[5];

for(int i=1;i<=5;i++){

    cout<<"entering studentdetails"<<i<<endl;

    s[i].setstudentdetails();
}
for(int i=1;i<=5;i++){

    cout<<"entered studendetails"<<i<<endl;

    s[i].getstudentdetails();

}



    return 0;
}