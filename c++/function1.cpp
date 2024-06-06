//repetative coode jase le eutai kaam garxa tyo hatauna function use hunxa
#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    int i;
    for(i=1;i<=n;i++){
        fact *=i;
           }
    return fact;
}
int main(){
int n=6;
int n1=8;
cout<<"the fact of 6 is;"<<factorial(n)<<endl;
cout<<"the fact of 8 is:"<<factorial(n1)<<endl;
return 0;
}