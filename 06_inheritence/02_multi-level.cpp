

#include<iostream>

using namespace std;

class Grandfather{

        public:
        void A(){

             cout <<"this property belongs to grandfather "<<endl;
            
            }

};

class Father :public Grandfather
{
     
    public:

    void B()
    {
        cout<<"this property belongs to father "<< endl;
    }
};

class Son : public Father 
{
   
    public:

    void C() 
    {
             cout<<"this property belongs to son "<<endl;

    }

};


int main(){

       Son s;

       s.A();
       s.B();
       s.C();
    return 0;
}