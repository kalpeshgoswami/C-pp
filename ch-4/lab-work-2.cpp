#include <iostream>
#include <string>

using namespace std;

class Customer
{
private:
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_city;
    int cust_number;
    int cust_sim_validity;
    string cust_telecom_brand_name;

public:
    void setdata(int id, string name, int age, string city, int number, int validity, string brand)
    {
        cust_id = id;
        cust_name = name;
        cust_age = age;
        cust_city = city;
        cust_number = number;
        cust_sim_validity = validity;
        cust_telecom_brand_name = brand;
    }

    void getdata(int i)
    {
        cout << "\nCustomer : " << i + 1 << endl;
        cout << "Id       : " << cust_id << endl;
        cout << "Name     : " << cust_name << endl;
        cout << "Age      : " << cust_age << endl;
        cout << "City     : " << cust_city << endl;
        cout << "Number   : " << cust_number << endl;
        cout << "Validity : " << cust_sim_validity << endl;
        cout << "Telecom  : " << cust_telecom_brand_name << endl;
    }
};

int main()
{
    Customer c[1];

    for (int i = 0; i < 11; i++)
    {
        int id, age, number, validity;
        string name, city, telecom;

        cout << "\nEnter Detail of Customer " << i + 1 << endl;

        cout << "ID : ";
        cin >> id;

        cout << "Name : ";
        cin >> name;

        cout << "Age : ";
        cin >> age;

        cout << "City : ";
        cin >> city;

        cout << "Number : ";
        cin >> number;

        cout << "Validity (in months) : ";
        cin >> validity;

        cout << "Telecom : ";
        cin >> telecom;

        c[i].setdata(id, name, age, city, number, validity, telecom);
    }

    for (int i = 0; i < 5; i++)
    {
        c[i].getdata(i);
    }

    return 0;
}
