#include<iostream>
using namespace std;
int main(){
int marks[] = {99, 100, 38};
int *p = marks;
int i=0;
cout << "The value of marks is "  << endl;
for(i=0;i<=2;i++)
{
    cout<< *(p + i)<<endl;
}
return 0;
}
