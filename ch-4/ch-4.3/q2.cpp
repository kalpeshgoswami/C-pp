#include <iostream>
#include <string>

using namespace std;

class Cafe
{

private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    int cafe_rating;
    string location;
    int establish_year;
    int staff;

public:
    Cafe()
    {
        cafe_id = 0;
        cafe_name = "not set";
        cafe_type = "not set";
        cafe_rating = 0;
        location = "not set";
        establish_year = 0;
        staff = 0;
    }

    void SetCafeData()
    {

        cout << "Enter cafe detail ";

        cout << "cafe id :";
        cin >> cafe_id;
        cin.ignore();

        cout << "cafe name :";
        getline(cin, cafe_name);

        cout << "cafe type :";
        getline(cin, cafe_type);

        cout << "cafe rating :";
        cin >> cafe_rating;
        cin.ignore();

        cout << "cafe location :";
        getline(cin, location);

        cout << "establish year :";
        cin >> establish_year;
        cin.ignore();

        cout << "staff :";
        cin >> staff;
        cin.ignore();
    }

    void DisplayCafeData()
    {
        cout << "Cafe details" << endl;

        cout << "cafe id              :" << cafe_id << endl;
        cout << "cafe name            :" << cafe_name << endl;
        cout << "cafe type            :" << cafe_type << endl;
        cout << "cafe rating          :" << cafe_rating << endl;
        cout << "cafe location        :" << location << endl;
        cout << "cafe edstablish year :" << establish_year << endl;
        cout << "cafe staff           :" << staff << endl;
    }

    ~Cafe()
    {
        cout << "Cafe object Destructor" << endl;
    }
};

int main()
{

    int n;

    cout << "enter cafe number" << endl;
    cin >> n;
    // cin.ignore;

    for (int i=0; i<n; i++){
        Cafe c;
        c.SetCafeData();
        c.DisplayCafeData();
    }

    return 0;
}
