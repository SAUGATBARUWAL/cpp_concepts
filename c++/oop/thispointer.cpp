#include<iostream>
using namespace std;
class A{
    int a,b;//local variable
    public:
    A(int a, int b)// instead of different name if both loacl and instcance variable have same name
    {
        this->a=a;
        this->b=b; //this bhako chai isntance variable
    }

    void showdata(){
        cout<<"the values are :"<<a<<b<<endl;
    }
};
int main(){
 A BOJ(3,4);
 BOJ.showdata();
 return 0;
}
