#include <iostream>
#include <string>
using namespace std;

class Scope {
    string name = "saugat";

public:
    string n1;  // Move the declaration of n1 to the public section

    // Constructor to initialize n1 with the value of name
    Scope() {
        n1 = name;
    }

    void introduce();
};

void Scope::introduce() {
    cout << "Hello, my name is " << n1 << endl;
}

int main() {
    Scope s1;
    s1.introduce();

    return 0;
}
