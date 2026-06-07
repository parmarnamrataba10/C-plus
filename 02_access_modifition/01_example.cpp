

#include<iostream>

using namespace std;

class bank{

  private:
  double bankbalance=10000;

  public:
  int accountnumber=123;

  //setter
   
  void deposit(int money){
  
    bankbalance+=money;

  }
  //getter
  void checkbalance(){

    cout<<bankbalance<<endl;
  }
};
int main(){
   
     bank b1;
      
      cout<< b1.accountnumber<<endl;

      b1.deposit(5000);

      b1.checkbalance();


    return 0;
}