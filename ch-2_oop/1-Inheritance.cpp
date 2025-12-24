#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle started" << endl;
    }
};

class Car : public Vehicle {
public:
    void honk() {
        cout << "Car honking" << endl;
    }
};

int main() {
    Car myCar;

    myCar.start(); 
    myCar.honk();  

    return 0;
}
