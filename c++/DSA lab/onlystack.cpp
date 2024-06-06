#include <iostream>
using namespace std;

#define MAX 4

class Stack {
    int top=-1;
    int stack[MAX];

public:
void push(int item){
    if(top==MAX-1){
        cout<<"stack ovwerflow"<<endl;
    }else {
        stack[++top]=item;
        cout<<"inserted item "<<item<<endl;
    }
}
void pop()){
    if(top==-1){
        cout<<"stack underflow"<<endl;
    }else {
        int item=stack[top--];
        cout<<"deleted  item "<<item<<endl;
    }
}void display(){
    if(top==-1){
        cout<<"stack empty "<<endl;
    }else {
       cout<<"inserted elements "<<endl;
       for(int i =0;i<=top;i++){
        cout<<stack[i];
       }
    }
}

};

int main() {
    Stack s;
    int choice, item;
    while (1) {
        cout << "\nPerform operations on the stack:";
        cout << "\n1.Push the element\n2.Pop the element\n3.Show\n4.End";
        cout << "\n\nEnter the choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter the element to be added onto the stack: ";
                cin >> item;
                s.push(item);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                return 0;
            default:
                cout << "\nInvalid choice!!";
        }
    }
    return 0;
}
