

#include<iostream>

using namespace std;


class Shop 
{
   
    public:
     string item1;
     string item2;

     Shop(string item1 ,string item2)
     {
 
         this->item1=item1;
         this->item2=item2;
     };

     void Shopitems()
     {

          cout<<"Item 1 is "<<item1<<endl;
          cout<<"Item 2 is "<<item2<<endl;
        

     }
};

int main(){

    Shop s1("fruits","vegetables");
    s1.Shopitems();
    return 0;

}