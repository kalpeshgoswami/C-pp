#include <iostream>
using namespace std;

class A
{
protected:
    int k, g, f;
};

class B : public A
{
public:
    void setData()
    {
        cout << "Enter three numbers: ";
        cin >> k >> g >> f;
    }

    void getData()
    {
        int sum;
        sum = (k * k * k) + (g * g * g) + (f * f * f);
        cout << "Sum of cubes = " << sum << endl;
    }
};

int main()
{
    B obj;
    obj.setData();
    obj.getData();
    return 0;
}