
#include<iostream>

using namespace std;

class Student{
    
  public:
      int stu_id;
      string stu_name;
      int stu_age;
      string stu_course;
      int stu_marks;
      string stu_city;
      int stu_semester;
      string stu_college_name;

void setstudentdetails(int id, string name, int age, string course, int marks, string city, int semester, string college)
{
             stu_id=id;
             stu_name=name;
             stu_age=age;
             stu_course=course;
             stu_marks=marks;
             stu_city=city;
             stu_semester=semester;
             stu_college_name=college;
}
void getstudentdetails(){
  cout<<"stu id :"<<stu_id<<endl;
  cout<<"stu name :"<<stu_name<<endl;
  cout<<"stu age :"<<stu_age<<endl;
  cout<<"stu course :"<<stu_course<<endl;
  cout<<"stu marks :"<<stu_marks<<endl;
  cout<<"stu city :"<<stu_city<<endl;
  cout<<"stu semester :"<<stu_semester<<endl;
  cout<<"stu college name :"<<stu_college_name<<endl;
}
};
int main(){
 Student s1;
 s1.setstudentdetails(101,"Aarav",18,"BCA",85,"Rajkot",1,"XYZ College");
 s1.getstudentdetails();
 cout<<endl;

 Student s2;
 s2.setstudentdetails(102,"Pooja",19,"MCA",90,"Ahmedabad",2,"ABC College");
 s2.getstudentdetails();
 cout<<endl;

 Student s3;
 s3.setstudentdetails(103,"Raj",20,"BBA",75,"Surat",3,"PQR College");
 s3.getstudentdetails();
 cout<<endl;

 Student s4;
 s4.setstudentdetails(104,"Nisha",21,"MBA",88,"Vadodara",4,"LMN College");
 s4.getstudentdetails();
 cout<<endl;

 Student s5;
 s5.setstudentdetails(105,"Karan",22,"BCA",92,"Mumbai",5,"DEF College");
 s5.getstudentdetails();
 cout<<endl;

 return 0;
}