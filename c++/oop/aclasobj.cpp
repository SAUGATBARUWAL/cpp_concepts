#include<iostream>
using namespace std;
class student{
    int a,b,sum;
    public:
    void getsvalue(int x,int y)
    {
        a=x;
        b=y;
        sum=x+y;
    }
    void disvalue(){
        cout<<"the value of a and b are:"<<a<<"\n"<<b<<endl;
        cout<<"the vaue of sum are:"<<sum<<endl;

    }
};
int main(){
    student s1;
    s1.getsvalue(2,5);
    s1.disvalue();
     return 0;

}