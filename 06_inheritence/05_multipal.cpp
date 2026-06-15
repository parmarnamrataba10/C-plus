

#include<iostream>

using namespace std;

class Animal{

public:
     void breathe (){
        
        cout<<" I can breathe "<<endl;
    }
};

class Swimmer{

    public:
  void swim(){
     
       cout<<"i can swim "<<endl;
  }
};

class walker{

    public:
    void walk(){
   
        cout<<" i can  walk "<<endl;

    }
};

class Guess : public Animal ,public Swimmer ,public walker {

   public:

   void duck(){


    cout<<" i am a duck " <<endl;
   }
};


int main(){

    Guess g;

    g.breathe ();
    g.swim();
    g.walk();
    g.duck();
  return 0;
}  