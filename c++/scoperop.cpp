#include<iostream>
using namespace std;
int m=10;//global variables 
int main(){
    int m=20;
    {
        int k=m;
        m=30;
        cout<<"value of k is:"<<k<<endl;
        cout<<"value of m is:"<<m<<endl;
        cout<<"value of global variable is:"<<::m<<"\n";
        return 0;
    }
}