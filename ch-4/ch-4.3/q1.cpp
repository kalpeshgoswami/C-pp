#include <iostream>
#include <string>

using namespace std;

class Company
{

private:
    int Company_id;
    string Company_name;
    int Company_staff;
    double Company_revenue;
    int Company_import_raw_diamonds;
    int Company_export_raw_diamonds;
    string Company_ceo; 

public:
    Company(int id, string name, int staff, double revenue, int imported, int exported, string ceo)
    {
        Company_id = id;
        Company_name = name;
        Company_staff = staff;
        Company_revenue = revenue;
        Company_import_raw_diamonds = imported;
        Company_export_raw_diamonds = exported;
        Company_ceo = ceo;
    }

    void dispay()
    {

        cout << "Company id         :" << Company_id << endl;
        cout << "Company name       :" << Company_name << endl;
        cout << "Company Staff      :" << Company_staff << endl;
        cout << "Company revenue    :" << Company_revenue << endl;
        cout << "Company inported   :" << Company_import_raw_diamonds << endl;
        cout << "Company exported   :" << Company_export_raw_diamonds << endl;
        cout << "Company ceo        :" << Company_ceo << endl;
    }

    ~Company()
    {
        cout << "destructor called" << endl;
    }
};

int main()

{
    int n;
    cout << "Enter number of company :";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int id, staff, imported, exported;
        double revenue;
        string name, ceo;

        cout << "Enter details of company " << i + 1 << endl;

        cout << "Id :";
        cin >> id;
        cin.ignore();

        cout << "NAME :";
        getline(cin, name);

        cout << "Staff Quantity :";
        cin >> staff;
        cin.ignore();

        cout << "Revenue :";
        cin >> revenue;
        cin.ignore();

        cout << "Imported diamond :";
        cin >> imported;
        cin.ignore();

        cout << "Exported diamond :";
        cin >> exported;
        cin.ignore();

        cout << "CEO :";
        getline(cin, ceo);

        Company d(id, name, staff, revenue, imported, exported, ceo);

        d.dispay();
    }

    return 0;
}