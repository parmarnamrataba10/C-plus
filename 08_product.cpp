
#include<iostream>

using namespace std;

class Product{


  public:
      int pro_id;
      string pro_name;
      string pro_category;
      int pro_price;
      int pro_quantity;
      string pro_brand;
      string pro_city;
      string pro_company_name;

void setproductdetails(int id, string name, string category, int price, int quantity, string brand, string city, string company)
{
             pro_id=id;
             pro_name=name;
             pro_category=category;
             pro_price=price;
             pro_quantity=quantity;
             pro_brand=brand;
             pro_city=city;
             pro_company_name=company;
}
void getproductdetails(){
  cout<<"pro id :"<<pro_id<<endl;
  cout<<"pro name :"<<pro_name<<endl;
  cout<<"pro category :"<<pro_category<<endl;
  cout<<"pro price :"<<pro_price<<endl;
  cout<<"pro quantity :"<<pro_quantity<<endl;
  cout<<"pro brand :"<<pro_brand<<endl;
  cout<<"pro city :"<<pro_city<<endl;
  cout<<"pro company name :"<<pro_company_name<<endl;
}
};
int main(){
 Product p1;
 p1.setproductdetails(201,"Laptop","Electronics",55000,10,"Dell","Rajkot","Dell India");
 p1.getproductdetails();
 cout<<endl;

 Product p2;
 p2.setproductdetails(202,"Mobile","Electronics",20000,25,"Samsung","Ahmedabad","Samsung India");
 p2.getproductdetails();
 cout<<endl;

 Product p3;
 p3.setproductdetails(203,"Keyboard","Accessory",1500,50,"Logitech","Surat","Logitech India");
 p3.getproductdetails();
 cout<<endl;

 Product p4;
 p4.setproductdetails(204,"Mouse","Accessory",800,75,"HP","Vadodara","HP India");
 p4.getproductdetails();
 cout<<endl;

 Product p5;
 p5.setproductdetails(205,"Monitor","Electronics",12000,15,"LG","Mumbai","LG India");
 p5.getproductdetails();
 cout<<endl;



 return 0;
}