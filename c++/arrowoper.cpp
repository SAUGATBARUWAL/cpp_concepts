#include<iostream>
using namespace std;

class MyClass {
public:
    void display() {
        cout << "Hello from MyClass!" << endl;
    }
};

int main() {
    MyClass obj;
    MyClass* ptr = &obj;  // Pointer to an object of MyClass

    // Using the arrow operator to access the member function through the pointer
    ptr->display();//instead of using (*ptr).display();

    return 0;
}
