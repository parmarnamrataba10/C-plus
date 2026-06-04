


#include<iostream>

using namespace std;

class Employee{

  public:
   
      int emp_id;
      string emp_name;
      int  emp_age;
      string emp_role;
      int emp_salary;
      string emp_city;
      int emp_experience;
      string emp_company_name;


      

void setemployeedetails(int id,string name,int age, string role,int salary,string city, int experience, string company)
{
             emp_id=id;
             emp_name=name;
             emp_age=age;
             emp_role=role;
             emp_salary=salary;
             emp_city=city;
             emp_experience=experience;
             emp_company_name=company;
}

void getemployeedetails(){
  cout<<"emp id :"<<emp_id<<endl;
  cout<<"emp name :"<<emp_name<<endl;
  cout<<"emp age :"<<emp_age<<endl;
  cout<<"emp role :"<<emp_role<<endl;
  cout<<"emp salary :"<<emp_salary<<endl;
  cout<<"emp city :"<<emp_city<<endl;
  cout<<"emp experience :"<<emp_experience<<endl;
  cout<<"emp compyname :"<<emp_company_name<<endl;
}
};

int main (){

 Employee e1;

 e1.setemployeedetails( 11,"nam",22,"assistent",20000,"bhv",1,"xyz");

 e1.getemployeedetails();
 cout<<endl;

 Employee e2;
e2.setemployeedetails(12,"Riya",24,"Manager",45000,"Ahmedabad",3,"ABC");

 e2.getemployeedetails();
 cout<<endl;


Employee e3;
e3.setemployeedetails(13,"Priya",26,"Developer",50000,"Surat",4,"cdf");

 e3.getemployeedetails();
 cout<<endl;


 Employee e4;
e4.setemployeedetails(14,"Rahul",28,"Designer",35000,"Vadodara",2,"ghj");

e4.getemployeedetails();
cout<<endl;

Employee e5;
e5.setemployeedetails(15,"Amit",30,"Team Leader",60000,"Mumbai",6,"hjij");

e5.getemployeedetails();
cout<<endl;

 
 return 0;
}


