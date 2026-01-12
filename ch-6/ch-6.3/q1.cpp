#include <iostream>
#include <string>

using namespace std;

class Employee
{
protected:
    int emp_id;
    string emp_name;
    int age;
    double salary;

public:
    virtual ~Employee() {}

    void setEmployee(int id, string n, int a, double s)
    {
        emp_id = id;
        emp_name = n;
        age = a;
        salary = s;
    }

    virtual void display()
    {
        cout << "\nEmployee Details\n";
        cout << "ID     : " << emp_id << endl;
        cout << "Name   : " << emp_name << endl;
        cout << "Age    : " << age << endl;
        cout << "Salary : " << salary << endl;
    }
};

class FullTimeEmployee : public Employee
{
protected:
    double bonus;

public:
    void setFullTimeEmployee(int id, string n, int a, double s, double b)
    {
        setEmployee(id, n, a, s);
        bonus = b;
    }

    void display() override
    {
        Employee::display();
        cout << "Type   : Full Time Employee" << endl;
        cout << "Bonus  : " << bonus << endl;
    }
};

class PartTimeEmployee : public Employee
{
protected:
    float hours;

public:
    void setPartTimeEmployee(int id, string n, int a, double s, float h)
    {
        setEmployee(id, n, a, s);
        hours = h;
    }

    void display() override
    {
        Employee::display();
        cout << "Type   : Part Time Employee" << endl;
        cout << "Hours  : " << hours << endl;
    }
};

int main()
{
    Employee* employees[20];
    int count = 0;
    int choice;

    do
    {
        cout << "\nEmployee Management System\n";
        cout << "1. Add Full Time Employee\n";
        cout << "2. Add Part Time Employee\n";
        cout << "3. Display Employees\n";
        cout << "4. Delete Last Employee\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1 && count < 20)
        {
            FullTimeEmployee* fte = new FullTimeEmployee();

            int id, age;
            double salary, bonus;
            string name;

            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Salary: ";
            cin >> salary;
            cout << "Enter Bonus: ";
            cin >> bonus;

            fte->setFullTimeEmployee(id, name, age, salary, bonus);
            employees[count++] = fte;
        }
        else if (choice == 2 && count < 20)
        {
            PartTimeEmployee* pte = new PartTimeEmployee();

            int id, age;
            float hours;
            double salary;
            string name;

            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Salary: ";
            cin >> salary;
            cout << "Enter Hours Worked: ";
            cin >> hours;

            pte->setPartTimeEmployee(id, name, age, salary, hours);
            employees[count++] = pte;
        }
        else if (choice == 3)
        {
            for (int i = 0; i < count; i++)
            {
                employees[i]->display();
                cout << "---------------------\n";
            }
        }
        else if (choice == 4)
        {
            if (count > 0)
            {
                delete employees[count - 1];
                count--;
                cout << "Employee deleted successfully.\n";
            }
            else
            {
                cout << "No employee to delete.\n";
            }
        }

    } while (choice != 5);

    for (int i = 0; i < count; i++)
    {
        delete employees[i];
    }

    return 0;
}
