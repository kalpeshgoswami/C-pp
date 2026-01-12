#include <iostream>
using namespace std;

class Num
{

    int value;

public:
    Num(int v)
    {
        value = v;
    }

    bool operator<(Num obj)
    {
        if (value < obj.value)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void display()
    {
        cout << value;
    }
};
int main()
{

    Num n1(100);
    Num n2(20);

    if (n1 < n2)
    {

        cout << "n2 contain higher value : ";
        n2.display();
    }
    else
    {

        cout << "n1 contain higher value: ";
        n1.display();
    }

    return 0;
}
