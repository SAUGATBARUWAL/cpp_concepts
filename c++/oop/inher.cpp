#include <iostream>
using namespace std;
class A{
    protected:
    int x;
    public:
    void input(){
        cout<<"enter x :"<<endl;
        cin>>x;

    }
    
};
class B:public A{
    int y;
    public:
    void getdata();
    void disdata();
};
void B::getdata(){
    cout<<"enter y:"<<endl;
    cin>>y;
}
void B::disdata(){
    cout<<"addition is :"<<x+y<<endl;
}
int main(){
    B obj;
    obj.input();
    obj.getdata();
    obj.disdata();
    return 0;
}