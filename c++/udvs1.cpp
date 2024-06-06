#include<iostream>
using namespace std;
struct students{
    char name[20];
    int eId,Salary;

} s1;
int main(){
    cout<<"enter details:"<<endl;
    cin>>s1.name>>s1.eId>>s1.Salary;
    cout<<"the values are:"<<s1.name<<"\t"<<s1.eId<<"\t"<<s1.Salary<<endl;
    return 0;
}