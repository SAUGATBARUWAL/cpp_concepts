#include<iostream>
using namespace std;
class A{
    public:
    void show(){
    cout<<"\n base class";

}
};
class B:public A{
       public:
    void show(){
    cout<<"\n derived class";

}
};
int main(){
B aa; aa.show();aa.A::show(); //hami lai pailai tha hunxa b ani a call hunxa so early binding
 return 0;
 /*tara late binding ma hami pointer use garxam
 foe example
 A *bptr;
 A aa;(B aa;)
 bptr=&aa;
 bptr->show(); yo garda esh le output base class dinxa ra esh ko satta (B aa;)rakhda pani
 A ko dinxa tesai le hami le virtual function banauxau
 */

}