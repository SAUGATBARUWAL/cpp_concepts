#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() const {
        cout << "Animal speaks" << endl;
    }
};

class Mammal : virtual public Animal {
public:
    void walk() const {
        cout << "Mammal walks" << endl;
    }
};

class Bird : virtual public Animal {
public:
    void fly() const {
        cout << "Bird flies" << endl;
    }
};

class Bat : public Mammal, public Bird {
public:
    void show() const {
        cout << "Bat shows its features" << endl;
    }
};

int main() {
    Bat bat;
    bat.speak();  // Accessing the speak() function from the virtual base class Animal
    bat.walk();   // Accessing the walk() function from the Mammal class
    bat.fly();    // Accessing the fly() function from the Bird class
    bat.show();   // Accessing the show() function from the Bat class

    return 0;
}