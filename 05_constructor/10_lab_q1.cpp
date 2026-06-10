

#include<iostream>

 using namespace std;

 class Student{


    private:

    string student_name;
    int student_rollno;
    float GPA;

    public:

     Student(string name,int rollno,float gpa){

        student_name=name;
        student_rollno=rollno;
        GPA=gpa;

     }

     void setstudentdetails(){

       cout<<" student name "<<endl;
       getline(cin,student_name);

       cout<<" student rollno "<<endl;
       cin>>student_rollno;
       cin.ignore();

       cout<<" student GPA "<<endl;
       cin>>GPA;


     }

     void getstudentdetails()
{
      
        cout << "Name    : " << student_name << endl;
        cout << "Roll No : " << student_rollno << endl;
        cout << "GPA     : " << GPA << endl;



}
 };

 int main(){




    return 0;
       
 }