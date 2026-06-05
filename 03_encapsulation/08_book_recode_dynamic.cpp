

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

    void setbookdetails(){

        cout<<"Enter Book ID : ";
        cin>>book_id;
        cin.ignore();

        cout<<"Enter Book Name : ";
        getline(cin,book_name);

        cout<<"Enter Book Author : ";
        getline(cin,book_author);

        cout<<"Enter Book Price : ";
        cin>>book_price;
        cin.ignore();

        cout<<"Enter Book Category : ";
        getline(cin,book_category);

        cout<<"Enter Book Publisher : ";
        getline(cin,book_publisher);

        cout<<"Enter Book Language : ";
        getline(cin,book_language);
    }

    void getbookdetails(){

        cout<<"Book ID : "<<book_id<<endl;
        cout<<"Book Name : "<<book_name<<endl;
        cout<<"Book Author : "<<book_author<<endl;
        cout<<"Book Price : "<<book_price<<endl;
        cout<<"Book Category : "<<book_category<<endl;
        cout<<"Book Publisher : "<<book_publisher<<endl;
        cout<<"Book Language : "<<book_language<<endl;
    }
};

int main(){

    Book b[5];

    for(int i=1;i<=5;i++){

        cout<<"Entering Book Details "<<i<<endl;

        b[i].setbookdetails();
    }

    for(int i=1;i<=5;i++){

        cout<<"Entered Book Details "<<i<<endl;

        b[i].getbookdetails();
    }

    return 0;
}