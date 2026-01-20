#include <iostream>
#include <vector>
using namespace std;

class Person
{
private:
    string name;
    int age;
    string address;

public:
   
    Person(string n, int a, string addr)
    {
        name = n;
        age = a;
        address = addr;
    }

    void display()
    {
        cout << "-- Person --" << endl;
        cout << "Name   : " << name << endl;
        cout << "Age    : " << age << endl;
        cout << "Address: " << address << endl;
    }
};

int main()
{
    int N;
    cout << "Enter number of persons: ";
    cin >> N;
    cin.ignore();  
    vector<Person*> people;

    for (int i = 0; i < N; i++)
    {
        string name, address;
        int age;

        cout << "\nEnter details for person " << i + 1 << endl;

        cout << "Name: ";
        getline(cin, name);

        cout << "Age: ";
        cin >> age;
        cin.ignore();

        cout << "Address: ";
        getline(cin, address);

        people.push_back(new Person(name, age, address));
    }

    cout << "\n--- Person Details ---\n";
    for (int i = 0; i < N; i++)
    {
        people[i]->display();
        delete people[i];  
    }

    return 0;
}
