#include<iostream>
using namespace std;
class demo{
    int x;
    public:
    void getdata(){
        cout<<"enter the number:"<<endl;
        cin>>x;
    }
    void putdata(){
        cout<<"answer:"<<x;
    }
    int  operator++(){//11 ; operator ko bracket ma int rakhdine
        x=x+3;
        return x;
    }
};
int main(){
    demo aa;
    aa.getdata();
    cout<<"\n orignal value:";
    aa.putdata();
 /*11*/   ++aa;//paxadi ++ rakhda kinai pani operator sanga match gardaina
 //prefix i.e aa++ banauna lai code 11 ma
    cout<<"\nvalue ater inc";
    aa.putdata();
    return 0;

}
