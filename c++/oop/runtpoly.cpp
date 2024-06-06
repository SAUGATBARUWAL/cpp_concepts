#include<iostream>
using namespace std;

class A {
public:
    virtual void show() {
        cout << "\n base class";
    }

    virtual ~A() {
        cout << "\n base class destructor";
    }
};

class B : public A {
public:
    void show() override {
        cout << "\n derived class";
    }

    ~B() override {
        cout << "\n derived class destructor";
    }
};

int main() {
    A* bptr;
    B aa;
    bptr = &aa;
    bptr->show();
    // Uncomment the line below to observe the destructor calls
    // delete bptr;

    return 0;
}
