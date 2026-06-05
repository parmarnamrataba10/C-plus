

#include<iostream>

using namespace std;

class Student{

private:
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_email;
    string stu_college;

public:

void setstudentdetails(int id, string name, int age, string course,string city, string email, string college)
{
    stu_id = id;
    stu_name = name;
    stu_age = age;
    stu_course = course;
    stu_city = city;
    stu_email = email;
    stu_college = college;
}

void getstudentdetails()
{
    cout<<"Student ID : "<<stu_id<<endl;
    cout<<"Student Name : "<<stu_name<<endl;
    cout<<"Student Age : "<<stu_age<<endl;
    cout<<"Student Course : "<<stu_course<<endl;
    cout<<"Student City : "<<stu_city<<endl;
    cout<<"Student Email : "<<stu_email<<endl;
    cout<<"Student College : "<<stu_college<<endl;
}

};

int main()
{
    Student s1;
    s1.setstudentdetails(101,"Aarav",18,"BCA", "Rajkot","aarav@gmail.com","XYZ College");
    s1.getstudentdetails();
    cout<<endl;

    Student s2;
    s2.setstudentdetails(102,"Pooja",19,"MCA", "Ahmedabad","pooja@gmail.com","ABC College");
    s2.getstudentdetails();
    cout<<endl;

    Student s3;
    s3.setstudentdetails(103,"Raj",20,"BBA", "Surat","raj@gmail.com","PQR College");
    s3.getstudentdetails();
    cout<<endl;

    Student s4;
    s4.setstudentdetails(104,"Nisha",21,"MBA","Vadodara","nisha@gmail.com","LMN College");
    s4.getstudentdetails();
    cout<<endl;

    Student s5;
    s5.setstudentdetails(105,"Karan",22,"BCA",  "Mumbai","karan@gmail.com","DEF College");
    s5.getstudentdetails();
    cout<<endl;

    return 0;
}