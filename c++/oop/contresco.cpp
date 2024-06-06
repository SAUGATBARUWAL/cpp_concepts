//copy const is used to copy value of old object to new one
#include<iostream>
using namespace std;

class demo {
private:
    int a;

public:
    demo() {
        a = 10;
    }

    demo(const demo &z) { // Added const in the copy constructor
        a = z.a;
    }

    void putdata() {
        cout << "\nA: " << a << endl;
    }

    ~demo() { // ~demo is the destructor; added () for proper syntax
        cout << "Destructor called" << endl;
    }
};

int main() {
    demo aa;
    demo bb(aa); // Copying value of aa obj....copy constructor
    demo cc(bb); // Copying value of bb obj....copy constructor
    aa.putdata();
    bb.putdata();
    cc.putdata();

    
    return 0;
}
