#include <iostream>
#include <string>

using namespace std;

class Admin
{

private:
    string company_name;
    double total_annual_revenue;

protected:
    double manager_salary;
    double employee_salary;
    int total_staff;

public:
    bool can_terminate;

    Admin()
    {
        company_name = "ABCD";
        total_annual_revenue = 20000;
        manager_salary = 10000;
        employee_salary = 8000;
        total_staff = 150;
        can_terminate = true;
    }

    virtual void Access()
    {
        cout << "\n--- Admin Access ---\n";
        cout << "Company Name           : " << company_name << endl;
        cout << "Total Annual Revenue   : " << total_annual_revenue << endl;
        cout << "Manager Salary         : " << manager_salary << endl;
        cout << "Employee Salary        : " << employee_salary << endl;
        cout << "Total Staff            : " << total_staff << endl;
        cout << "Can Terminate          : " << can_terminate << endl;
    }
};

class Manager : public Admin
{
public:
    void Access() override
    {
        cout << "\n--- Manager Access ---\n";
        cout << "Manager Salary : " << manager_salary << endl;
        cout << "Employee Salary: " << employee_salary << endl;
        cout << "Total Staff    : " << total_staff << endl;
        cout << "Can Terminate  : " << can_terminate << endl;
    }
};

class Employee : public Manager
{
public:
    void Access() override
    {
        cout << "\n--- Employee Access ---\n";

        cout << "Employee Salary : " << employee_salary << endl;
        cout << "Total Staff     : " << total_staff << endl;
        cout << "Can Terminate   : " << can_terminate << endl;
    }
};

int main()
{
    Admin A;
    Manager M;
    Employee E;

    A.Access();
    M.Access();
    E.Access();

    return 0;
}