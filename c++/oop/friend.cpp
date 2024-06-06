#include <iostream>
using namespace std;
class dev;
class raaj{
    int money=2000;
    friend void Saugat(raaj,dev);
    
};
class dev{
    int money=3000;
    friend void Saugat(raaj,dev);
};
void Saugat(raaj r1, dev d1){
 cout<<"give me money dev and raj :"<<r1.money+d1.money<<endl;   
}
int main(){
    raaj obj1; dev obj2;
    Saugat(obj1,obj2);
    return 0;
}