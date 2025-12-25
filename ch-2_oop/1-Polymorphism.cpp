#include <iostream>
using namespace std;

class shape
{

public:
    void draw()
    {
        cout << "circles" << endl;
    }
};

class Circle : public shape
{

public:
    void draw()
    {
        cout << "squares" << endl;
    }
};

int main()
{

    Circle c;
    c.draw();

    return 0;
}