#include <iostream>
using namespace std;

class Animal {
public:

    virtual void displayDetails() {
        cout << "This is an animal." << endl;
    }

    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void displayDetails() override {
        cout << "Animal: Dog" << endl;
        cout << "Sound: Bark" << endl;
        cout << "Habitat: Domestic" << endl;
    }
};

class Cat : public Animal {
public:
    void displayDetails() override {
        cout << "Animal: Cat" << endl;
        cout << "Sound: Meow" << endl;
        cout << "Habitat: Domestic" << endl;
    }
};

class Cow : public Animal {
public:
    void displayDetails() override {
        cout << "Animal: Cow" << endl;
        cout << "Sound: Moo" << endl;
        cout << "Habitat: Farm" << endl;
    }
};

int main() {
    
    Animal* animals[3];

    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    for (int i = 0; i < 3; i++) {
        cout << "------------------------" << endl;
        animals[i]->displayDetails();
    }

    for (int i = 0; i < 3; i++) {
        delete animals[i];
    }

    return 0;
}
