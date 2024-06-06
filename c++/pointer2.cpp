#include <iostream>
using namespace std;
 
int main()
{
    int a = 100;
    int *b = &a;
    int **c = &b;
    cout << "Value of variable a is " << a << endl;
    cout<<"address of a is"<<&a<<endl;
    cout << "Address of variable a (value of b) is " << b << endl;
    cout<<"address of a is"<<&b<<endl;
    cout << "Address of pointer b is " << c << endl;
    cout<<"address of c is"<<&c;
    return 0;
}
