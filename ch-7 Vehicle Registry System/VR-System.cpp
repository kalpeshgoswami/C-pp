#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
private:
    int vehicle_id;
    string manufacturer;
    string model;
    int year;

public:
    static int totalvehicles;

    Vehicle()
    {
        vehicle_id = 0;
        manufacturer = "not set";
        model = "Unknown";
        year = 0;
        totalvehicles++;
    }

    Vehicle(int id, string manu, string mod, int yr)
    {
        vehicle_id = id;
        manufacturer = manu;
        model = mod;
        year = yr;
        totalvehicles++;
    }

    ~Vehicle()
    {
        totalvehicles--;
    }

    void setVehicleID(int id)
    {
        vehicle_id = id;
    }

    void setManufacturer(string manu)
    {
        manufacturer = manu;
    }

    void setModel(string mod)
    {
        model = mod;
    }

    void setYear(int yr)
    {
        year = yr;
    }

    int getVehicleID()
    {
        return vehicle_id;
    }

    string getManufacturer()
    {
        return manufacturer;
    }

    string getModel()
    {
        return model;
    }

    int getYear()
    {
        return year;
    }

    void display()
    {
        cout << "Vehicle ID     : " << vehicle_id << endl;
        cout << "Manufacturer   : " << manufacturer << endl;
        cout << "Model          : " << model << endl;
        cout << "Year           : " << year << endl;
    }
};

int Vehicle::totalvehicles = 0;

int main()
{
    Vehicle v1(1, "Toyota", "Corolla", 2020);
    Vehicle v2(2, "Honda", "Civic", 2022);

    v1.display();
    cout << endl;
    v2.display();

    cout << "\nTotal Vehicles: " << Vehicle::totalvehicles << endl;

    return 0;
}
