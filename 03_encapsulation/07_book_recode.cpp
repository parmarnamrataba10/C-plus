
#include<iostream>

using namespace std;

class Book{

private:
    int book_id;
    string book_name;
    string book_author;
    int book_price;
    string book_category;
    string book_publisher;
    string book_language;

public:

void setbookdetails(int id, string name, string author, int price, string category, string publisher, string language)
{
    book_id = id;
    book_name = name;
    book_author = author;
    book_price = price;
    book_category = category;
    book_publisher = publisher;
    book_language = language;
}

void getbookdetails()
{
    cout<<"Book ID : "<<book_id<<endl;
    cout<<"Book Name : "<<book_name<<endl;
    cout<<"Book Author : "<<book_author<<endl;
    cout<<"Book Price : "<<book_price<<endl;
    cout<<"Book Category : "<<book_category<<endl;
    cout<<"Book Publisher : "<<book_publisher<<endl;
    cout<<"Book Language : "<<book_language<<endl;
}

};

int main()
{
    Book b1;
    b1.setbookdetails(101,"C++ Basics","Yashwant",350,"Programming","Tech Publication","English");
    b1.getbookdetails();
    cout<<endl;

    Book b2;
    b2.setbookdetails(102,"Data Structure","Ravi",400,"Computer","ABC Publication","English");
    b2.getbookdetails();
    cout<<endl;

    Book b3;
    b3.setbookdetails(103,"Mathematics","Mehta",250,"Education","XYZ Publication","Gujarati");
    b3.getbookdetails();
    cout<<endl;

    Book b4;
    b4.setbookdetails(104,"Science","Patel",300,"Education","PQR Publication","Hindi");
    b4.getbookdetails();
    cout<<endl;

    Book b5;
    b5.setbookdetails(105,"Java Programming","Sharma",500,"Programming","LMN Publication","English");
    b5.getbookdetails();
    cout<<endl;

    return 0;
}