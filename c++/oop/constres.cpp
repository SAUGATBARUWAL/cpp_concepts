/*constructors are the functions that initailaize the values of variable inside te object,
these have same name sas class*/
/*everytime a new object is created of class a constructor is called*/
/*constructoe doesn't have a return type not even a void and these constructor can't be inherited*/
#include<iostream>
using namespace std;
class constres
{
private:
    int a,b;
    public:
    constres(){//default constructor
        a=10;
        b=20;
        }

        void putdata();
    
};
void constres::putdata(){
    cout<<"a="<<a<<"\t"<<"b="<<b<<endl;

}
int main(){
    constres boj;
    boj.putdata();

    return 0;

}
