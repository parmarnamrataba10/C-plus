


#include <iostream>

using namespace std;

class Hotel
{

private:
    int hotel_id;
    string hotel_name;
    string hotel_type;
    int hotel_rating;
    string hotel_location;
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;

    static int hotelCount;

public:
    void setHotelDetails()
    {

        cout << "enter hotel id " << endl;
        cin >> hotel_id;
        cin.ignore();

        cout << "enter hotel name " << endl;
        getline(cin, hotel_name);

        cout << "enter hotel type " << endl;    
        getline(cin, hotel_type);

        cout << "enter hotel rating " << endl;
        cin >> hotel_rating;
        cin.ignore();

        cout << "enter hotel location " << endl;
        getline(cin, hotel_location);

        cout << "enter hotel establish year " << endl;
        cin >> hotel_establish_year;
        cin.ignore();

        cout << "enter hotel staff quantity " << endl;
        cin >> hotel_staff_quantity;
        cin.ignore();

        cout << "enter hotel room quantity " << endl;
        cin >> hotel_room_quantity;
        cin.ignore();

        hotelCount++;
    }

    void getHotelDetails()
    {

        cout << "hotel id             " << hotel_id << endl;
        cout << "hotel name           " << hotel_name << endl;
        cout << "hotel type           " << hotel_type << endl;
        cout << "hotel rating         " << hotel_rating << endl;
        cout << "hotel location       " << hotel_location << endl;
        cout << "hotel establish year " << hotel_establish_year << endl;
        cout << "hotel staff quantity " << hotel_staff_quantity << endl;
        cout << "hotel room quantity  " << hotel_room_quantity << endl;
    }

    static void getHotelCount()
    {

        cout << "hotel count " << hotelCount << endl;
    }
};

int Hotel :: hotelCount = 0;

int main()
{

    cout << "enter a size of an array " << endl;
    int n;
    cin >> n;

    Hotel arr[n];

    for (int i = 0; i < n; i++)
    {

        arr[i].setHotelDetails();
    }

    for (int i = 0; i < n; i++)
    {

        arr[i].getHotelDetails();
    }

        Hotel::getHotelCount();

    return 0;
}