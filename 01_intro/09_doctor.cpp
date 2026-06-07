

#include<iostream>


using namespace std;

class Doctor{

  public:

      int doc_id;
      string doc_name;
      int doc_age;
      string doc_specialization;
      int doc_salary;
      string doc_city;
      int doc_experience;
      string doc_hospital_name;

void setdoctordetails(int id, string name, int age, string specialization, int salary, string city, int experience, string hospital)
{
             doc_id=id;
             doc_name=name;
             doc_age=age;
             doc_specialization=specialization;
             doc_salary=salary;
             doc_city=city;
             doc_experience=experience;
             doc_hospital_name=hospital;
}
void getdoctordetails(){
  cout<<"doc id :"<<doc_id<<endl;
  cout<<"doc name :"<<doc_name<<endl;
  cout<<"doc age :"<<doc_age<<endl;
  cout<<"doc specialization :"<<doc_specialization<<endl;
  cout<<"doc salary :"<<doc_salary<<endl;
  cout<<"doc city :"<<doc_city<<endl;
  cout<<"doc experience :"<<doc_experience<<endl;
  cout<<"doc hospital name :"<<doc_hospital_name<<endl;
}
};
int main(){


 Doctor d1;
 d1.setdoctordetails(301,"Dr.Arjun",35,"Cardiologist",90000,"Rajkot",8,"Civil Hospital");
 d1.getdoctordetails();
 cout<<endl;


 Doctor d2;
 d2.setdoctordetails(302,"Dr.Meera",40,"Neurologist",120000,"Ahmedabad",12,"Apollo Hospital");
 d2.getdoctordetails();
 cout<<endl;


 Doctor d3;
 d3.setdoctordetails(303,"Dr.Suresh",32,"Dentist",60000,"Surat",5,"Smile Clinic");
 d3.getdoctordetails();
 cout<<endl;


 Doctor d4;
 d4.setdoctordetails(304,"Dr.Kavya",38,"Pediatrician",85000,"Vadodara",10,"Care Hospital");
 d4.getdoctordetails();
 cout<<endl;


 Doctor d5;
 d5.setdoctordetails(305,"Dr.Rohit",45,"Orthopedic",110000,"Mumbai",15,"Fortis Hospital");
 d5.getdoctordetails();
 cout<<endl;
 

 return 0;
}