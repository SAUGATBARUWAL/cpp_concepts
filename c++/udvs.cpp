#include<iostream>
using namespace std;
struct students{
    char name[20];
    int eId,Salary;

};
int main(){
    struct students s1;
    s1.name="S",s1.eId=100,s1.Salary=100000;
    cout<<s1.name<<endl<<s1.eId<<endl<<s1.Salary;
    return 0;
//i can't assign string directly to a character so the solution will be to use string instead of char
}