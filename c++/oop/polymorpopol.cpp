#include<iostream>
using namespace std;

class demo {
    int a;

public:
    void getdata(){
        cout<<"enter a number";
        cin>>a;
    }
    void putdata(){
        cout<<"number"<<a;
    }
 /*lol*/   demo operator+(demo bb){//cc=aa+bb//cc bhanne object lai aa ko refrence 
    //bata +lai call garne(+ is function )and bb oject pass garne
    demo cc;
    cc.a=a+bb.a;//cc[a=11
    return cc;//main function ko cc ma janxa kina bhanne tei tww call gareko
    }
};
int main()
{
    demo aa,bb,cc;
    aa.getdata();//aa[a=5
    bb.getdata();//bb[b=6
    cc=aa+bb;//lol bhanne dthau ko function call hunxa i.e + and arg b
    cc.putdata();
    bb.putdata();
    aa.putdata();
    return 0;
}
 