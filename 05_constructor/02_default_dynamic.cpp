

#include<iostream>

using namespace std;

class Bank{

    public:

    int accountNumber;

    Bank(){
  
       cout<<"enter accountnumber "<<endl;
       cin>>accountNumber;

    }
  void dispalybankdetails(){

     cout << "accountnumber is "<<accountNumber<<endl;
    
  }


};

int main (){

  Bank b1;

  b1.dispalybankdetails();



    return 0;
}