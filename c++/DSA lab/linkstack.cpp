#include <iostream>
#include <cstdlib> // For exit()

using namespace std;

class node
{
public:
    int info;
    node *next;
};

node *top = NULL;

void push(int data)
{
    node *newNode = new node();
    newNode->info = data;
    if (top == NULL)
    {
        newNode->next = NULL;
        top = newNode;
    }
    else
    {
        newNode->next = top;
        top = newNode;
    }
}

int pop()
{
    int item = -1; // Assume -1 represents an invalid value(to show stack is empty)
    if (top == NULL)
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        node *temp = top;
        item = temp->info;
        if (temp->next == NULL)
        {
            top = NULL;
        }
        else
        {
            top = temp->next;
        }
        delete temp;
    }
    return item;
}

void display()
{
    if (top == NULL)
    {
        cout << "Stack: empty." << endl;
    }
    else
    {
        node *temp = top;
        cout << "Stack is: ";
        while (temp != NULL)
        {
            cout << temp->info << "  ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main()
{
    int n, item;
    while (1)
    {
        cout << "Stack Operations:" << endl;
        cout << "1. Push an item" << endl;
        cout << "2. Pop an item" << endl;
        cout << "3. Exit" << endl;
        display();
        cout << "Choose operation: ";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Enter an item: ";
            cin >> item;
            push(item);
            break;
        case 2:
            item = pop();
            if (item != -1)
                cout << item << " is popped." << endl;
            break;
        case 3:
            exit(0);
        default:
            cout << "Enter correct option." << endl;
        }
    }
    return 0;
}
