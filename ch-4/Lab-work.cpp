#include <iostream>
#include <string>
using namespace std;

class Student
{
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_email;
    string stu_collage;

public:
    void setdata(int id, string name, int age, string course, string city, string email, string collage)
    {
        stu_id = id;
        stu_name = name;
        stu_age = age;
        stu_course = course;
        stu_city = city;
        stu_email = email;
        stu_collage = collage;
    }

    void getdata(int i)

    {
            cout << "student :" << i + 1 << endl;
            
            cout << "id         :" << stu_id << endl;
            cout << "name       :" << stu_name << endl;
            cout << "age        :" << stu_age << endl;
            cout << "course     :" << stu_course << endl;
            cout << "city       :" << stu_city << endl;
            cout << "email      :" << stu_email << endl;
            cout << "college    :" << stu_collage << endl;
        }
};

int main()
{
    Student s[2];

    for (int i = 0; i < 2; i++)
    {
        int id, age;
        string name, course, city, email, college;

        cout << "Enter Detail of student " << i + 1 << endl;

        cout << "ID :";
        cin >> id;

        cout << "AGE :";
        cin >> age;

        cout << "NAME :";
        cin >> name;

        cout << "COURSE :";
        cin >> course;

        cout << "CITY :";
        cin >> city;

        cout << "EMAIL :";
        cin >> email;

        cout << "COLLEGE :";
        cin >> college;

        s[i].setdata(id, name, age, course, city, email, college);
    }

    for (int i = 0; i < 5; i++)
    {
        s[i].getdata(i);
    }

    return 0;
}