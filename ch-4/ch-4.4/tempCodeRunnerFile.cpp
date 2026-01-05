#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student
{
private:
    int Roll;
    float Gpa;
    string Name;

public:
    Student()
    {
        Roll = 0;
        Gpa = 0.0;
        Name = "not set";
        cout << "Default Constructor Called" << endl;
    }

    Student(int R, float G, string N)
    {
        Roll = R;
        Gpa = G;
        Name = N;
        cout << "Parameterized Constructor Called" << endl;
    }

    int GetRoll() const
    {
        return Roll;
    }

    float GetGpa() const
    {
        return Gpa;
    }

    string GetName() const
    {
        return Name;
    }

    void display() const
    {
        cout << "Name: " << Name << "Roll No: " << Roll << "GPA: " << Gpa << endl;
    }

    ~Student()
    {
        cout << "Destructor called, object destroyed" << endl;
    }
};

class StudentRecordManagement
{
private:
    vector<Student> students;

public:
    void addStudent(const Student &s)
    {
        students.push_back(s);
        cout << "Student Data Added" << endl;
    }

    void DisplayAllData()
    {
        cout << "\nAll student details:" << endl;

        if (students.empty())
        {
            cout << "No student records available" << endl;
            return;
        }

        for (int i = 0; i < students.size(); i++)
        {
            students[i].display();
        }
    }

    void SearchByRoll(int roll)
    {
        for (int i = 0; i < students.size(); i++)
        {
            if (students[i].GetRoll() == roll)
            {
                cout << "Student Found:" << endl;
                students[i].display();
                return;
            }
        }

        cout << "Student with Roll No " << roll << " not found." << endl;
    }
};

int main()
{
    Student s1(1, 7.7, "John");
    Student s2(2, 8.7, "Jack");
    Student s3(3, 9.7, "sparrow");

    StudentRecordManagement manager;

    manager.addStudent(s1);
    manager.addStudent(s2);
    manager.addStudent(s3);

    manager.DisplayAllData();

    manager.SearchByRoll(2);

    return 0;
}
