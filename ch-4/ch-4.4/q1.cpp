#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student
{
private:
    int Roll;
    float Gpt;
    string Name;

public:
    Student()
    {
        Roll = 0;
        Gpt = 0.0;
        Name = "not set";

        cout << "Default Contructor Called" << endl;

    }

    Student(int r, float g, string n)
    {
        Roll = r;
        Gpt = g;
        Name = n;

        cout << "Parameterized Constructor Called" << endl;
    }

    
    int GetRoll () const {return Roll;};
    float GetGpt () const {return Gpt;};
    string GetName () const {return Name;};
    


}