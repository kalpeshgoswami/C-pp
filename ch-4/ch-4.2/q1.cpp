#include <iostream>
#include <string>

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

    int static totalCount;

public:
    void setHotelData(int id, string name, string type, int rating, string location, int year, int staff, int room)
    {
        hotel_id = id;
        hotel_name = name;
        hotel_type = type;
        hotel_rating = rating;
        hotel_location = location;
        hotel_establish_year = year;
        hotel_staff_quantity = staff;
        hotel_room_quantity = room;

        totalCount++;
    }

    void getHotelDetail()
    {

        cout << "ID                :" << hotel_id << endl;
        cout << "Name              :" << hotel_name << endl;
        cout << "Type              :" << hotel_type << endl;
        cout << "Rating            :" << hotel_rating << endl;
        cout << "Location          :" << hotel_location << endl;
        cout << "Establish_Year    :" << hotel_establish_year << endl;
        cout << "Staff             :" << hotel_staff_quantity << endl;
        cout << "Room              :" << hotel_room_quantity << endl;
    }
    static void totalHotelCount()
    {

        cout << "total hotels are " << totalCount << endl;
    }
};

int Hotel::totalCount = 0;

int main()
{

    cout << "enter hotel number you want to add ";
    int n;
    cin >> n;

    Hotel hotels[n];

    for (int i = 0; i < n; i++)
    {

        int id, rating, year, staff, room;
        string name, type, location;

        cout << "\n detail your are entering for hotel: " << i + 1 << endl;

        cout << "ID " << endl;
        cin >> id;
        cin.ignore();

        cout << "Name " << endl;
        getline(cin, name);

        cout << "Type " << endl;
        getline(cin, type);

        cout << "Rating " << endl;
        cin >> rating;
        cin.ignore();

        cout << "Location " << endl;
        getline(cin, location);

        cout << "Establish_Year  " << endl;
        cin >> year;
        cin.ignore();

        cout << "Staff  " << endl;
        cin >> staff;
        cin.ignore();

        cout << "Room  " << endl;
        cin >> room;
        cin.ignore();

        hotels[i].setHotelData(id, name, type, rating, location, year, staff, room);
    }

    cout << "hotel details are ..." << endl;

    for (int i = 0; i < n; i++)
    {

        hotels[i].getHotelDetail();
    }

    Hotel::totalHotelCount();

    return 0;
}