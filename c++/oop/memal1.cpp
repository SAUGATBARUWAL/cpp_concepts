#include<iostream>
using namespace std;
class shop{
    int itemId[30], itemPrice[30];//item and price array ko size 0 xa
    int counter;
    public:
    void initCounter(){counter=0;}
    void setPrice();
    void disPrice();
};
void shop::setPrice(){
    cout<<"enter product id:"<<counter+1<<endl;
    cin>>itemId[counter];//counter ma 
    cout<<"enter product Price:"<<endl;
    cin>>itemPrice[counter];
    counter ++;
}
void shop::disPrice(){
    for (int i = 0; i < counter; i++)
    {
        cout<<"the item price with id"<<itemId[i]<<"is"<<itemPrice[i]<<endl;
    }
    


}

int main(){
shop dhukaan;
dhukaan.initCounter();
dhukaan.setPrice();
dhukaan.setPrice();
dhukaan.setPrice();
dhukaan.disPrice();
    return 0;
}