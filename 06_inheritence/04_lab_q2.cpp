

#include<iostream>

using namespace std;

class P{
    
    public:

    float celsius;
    
};

class Q : public P {
     

      public :

      float Fahrenheit ;
      void ToFahrenheit()
      {
               cout <<" enter the Temperature "<<endl;
               cin >> celsius;

               Fahrenheit=((celsius*9/5))+32;
              cout<<"the Fahrenheit is "<<Fahrenheit<<endl;

       }
};

class R : public Q {

    public:

    float kelvin;

    void Tokelvin(){


        kelvin=((Fahrenheit-32)*5/9)+273.15;
        cout<< "the kelvin is "<<kelvin<<endl;
    }

};

int main(){

      R obj;
      obj.ToFahrenheit();
      obj.Tokelvin();
    return 0;

}