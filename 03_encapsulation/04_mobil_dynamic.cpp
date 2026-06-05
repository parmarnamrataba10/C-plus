

#include<iostream>

using namespace std;

class customer{
    

     private:
      int cust_id;
      string cust_name;
      int cust_age;
      string cust_city;
      string cust_mobile_number;
      int cust_simcard_validity;
      string cust_telecom_brand_name;

      public:

      void setcustomerdetails(){
        
        cout<<"enter customer id : ";
        cin>>cust_id;
        cin.ignore();

        cout<<"enter customer name : ";
        getline(cin,cust_name);

        cout<<"enter customer age : ";
        cin>>cust_age;
        cin.ignore();

        cout<<"enter customer city : ";
        getline(cin,cust_city);

        cout<<"enter customer mobile number : ";
        getline(cin,cust_mobile_number);

        cout<<"enter customer simcard validity : ";
        cin>>cust_simcard_validity;
        cin.ignore();

        cout<<"enter customer telecom brand name : ";
        getline(cin,cust_telecom_brand_name);
         
      }

      void getcustomerdeatils()
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




int main(){

    customer c[5];

    for(int i=1;i<=5;i++){

        
    cout<<"entering custormerdetails"<<i<<endl;

    c[i]. setcustomerdetails();
}
for(int i=1;i<=5;i++){

    cout<<"entered customerdetails"<<i<<endl;

    c[i].getcustomerdeatils() ;

}

return 0;
}