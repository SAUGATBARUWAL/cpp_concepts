#include<iostream>
using namespace std;
 
int main(){
    int a= 244;
    int *b= &a;
    int **c=&b;
    cout<<"the value of a is :"<<a<<endl;
    cout<<"the address is given by:"<<&a<<endl;
    cout<<"the value(address of a) of b is:"<<b<<endl;
     cout<<"the address of b is given by:"<<&b<<endl;
     cout<<"the * in an & gives value not address:"<<*(&a)<<endl;
      cout<<"the address of b is represented by another pointer to pointer ** and value is:"<<c<<endl;
cout<<"the address of  c given by:"<<&c<<endl;
     return 0;

}