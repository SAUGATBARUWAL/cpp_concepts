//parameterized constructor..parameter is given.
#include<iostream>
using namespace std;
class paracons{
    int a,b;
    public:
    paracons(int x, int y){
        a=x;
        b=y;
    }
    void putdata();
};
void paracons::putdata(){
    cout<<"the value of"<<"\t a is :"<<a<<"\t b is :"<<b<<endl;
}
int main(){
    paracons obj(3,5);
    obj.putdata();
    return 0;
}