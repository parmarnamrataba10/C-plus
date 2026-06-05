

#include<iostream>

using namespace std;

class Customer{

  private:
      int cust_id;
      string cust_name;
      int cust_age;
      string cust_city;
      string cust_mobile_number;
      int cust_simcard_validity;
      string cust_telecom_brand_name;

  public:

void setcustomerdetails(int id, string name, int age, string city, string mobile, int validity, string brand)
{
      cust_id = id;
      cust_name = name;
      cust_age = age;
      cust_city = city;
      cust_mobile_number = mobile;
      cust_simcard_validity = validity;
      cust_telecom_brand_name = brand;
}

void getcustomerdetails()
{
      cout<<"Customer ID : "<<cust_id<<endl;
      cout<<"Customer Name : "<<cust_name<<endl;
      cout<<"Customer Age : "<<cust_age<<endl;
      cout<<"Customer City : "<<cust_city<<endl;
      cout<<"Customer Mobile Number : "<<cust_mobile_number<<endl;
      cout<<"SIM Card Validity : "<<cust_simcard_validity<<" Years"<<endl;
      cout<<"Telecom Brand Name : "<<cust_telecom_brand_name<<endl;
}

};

int main()
{
    Customer c1;
    c1.setcustomerdetails(101,"Aarav",20,"Rajkot","9876543210",2,"Jio");
    c1.getcustomerdetails();
    cout<<endl;

    Customer c2;
    c2.setcustomerdetails(102,"Pooja",22,"Ahmedabad","9876543211",3,"Airtel");
    c2.getcustomerdetails();
    cout<<endl;

    Customer c3;
    c3.setcustomerdetails(103,"Raj",25,"Surat","9876543212",1,"Vi");
    c3.getcustomerdetails();
    cout<<endl;

    Customer c4;
    c4.setcustomerdetails(104,"Nisha",21,"Vadodara","9876543213",2,"BSNL");
    c4.getcustomerdetails();
    cout<<endl;

    Customer c5;
    c5.setcustomerdetails(105,"Karan",23,"Mumbai","9876543214",5,"Jio");
    c5.getcustomerdetails();
    cout<<endl;

    return 0;
}