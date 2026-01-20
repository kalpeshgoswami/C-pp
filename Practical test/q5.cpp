#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double area() = 0;
    virtual void draw() = 0;

    virtual ~Shape() {}
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }

    double area() override
    {
        return 3.14159 * radius * radius;
    }

    void draw() override
    {
        cout << "Drawing a Circle with radius " << radius << endl;
    }
};

class Rectangle : public Shape
{
private:
    double length;
    double breadth;

public:
    Rectangle(double l, double b)
    {
        length = l;
        breadth = b;
    }

    double area() override
    {
        return length * breadth;
    }

    void draw() override
    {
        cout << "Drawing a Rectangle with length "
             << length << " and breadth " << breadth << endl;
    }
};

int main()
{

    Shape *shapes[2];

    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);

    for (int i = 0; i < 2; i++)
    {
        cout << "--------------------------" << endl;
        shapes[i]->draw();
        cout << "Area: " << shapes[i]->area() << endl;
    }

    for (int i = 0; i < 2; i++)
    {
        delete shapes[i];
    }

    return 0;
}