#include<iostream>
using namespace std;

class demo {
    int a, b;

public:
    void getdata();
    friend int sum(demo); // Declaration of the friend function
};

void demo::getdata() {
    cout << "Enter 2 numbers: " << endl;
    cin >> a >> b;
}

int sum(demo aa) {
    // Access private members using public member functions
    return (aa.a + aa.b);
}

int main() {
    demo obj;
    obj.getdata(); // Call the getdata function to set values for a and b
    cout << "Addition is = " << sum(obj) << endl;
    return 0;
}
