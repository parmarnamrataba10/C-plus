

#include<iostream>

using namespace std;

class Phone{

    public:

    string battery ;
    string processer ;


    Phone(){

    battery="5000Mah";
    processer="snapdargon";

    }

   

     void dispalyphonedetails(){

        cout<<"my phone has "<< battery <<" battery "<<endl;
        cout<<"my phone has "<< processer <<" processer "<<endl;
    
     }


};

int main(){

    Phone p1;
    p1.dispalyphonedetails();


  return 0;

}