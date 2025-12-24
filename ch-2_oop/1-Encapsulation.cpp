#include <iostream>
using namespace std;

class person
{
private:
    int age;

public:
    void setAge(int a)
    {
        age = a;
    }

    int getAge()
    {
        return age;
    }
};

int main()
{

    person p;
    p.setAge(25);
    cout << p.getAge();

    return 0;
}
