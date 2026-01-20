#include <iostream>
using namespace std;

class Animal
{
private:
    string name;
    string sound;

public:
    void setName(string n)
    {
        name = n;
    }

    void setSound(string s)
    {
        sound = s;
    }

    string getName()
    {
        return name;
    }

    string getSound()
    {
        return sound;
    }

    void makeSound()
    {
        cout << name << " makes sound: " << sound << endl;
    }
};

class Dog : public Animal
{
public:
    Dog()
    {
        setName("Dog");
        setSound("Bark");
    }
};

class Cat : public Animal
{
public:
    Cat()
    {
        setName("Cat");
        setSound("Meow");
    }
};

int main()
{
    Dog d;
    Cat c;

    d.makeSound();
    c.makeSound();

    return 0;
}