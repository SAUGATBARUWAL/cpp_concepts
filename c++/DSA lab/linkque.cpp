//implementing queue using linked list in c++
#include <iostream>
#include <cstdlib> // For exit()

using namespace std;

class node//creates a class node
{
public:
    int info;
    node *next;//declares a pointer to an object of type Node, commonly used to represent the next node in a linked list.
};

node *front = NULL;
node *rear = NULL;/*node *front = NULL; and node *rear = NULL;
 declare pointers front and rear initialized to NULL for tracking the front and rear of a queue.*/

void enqueue(int data)//adds element to the queue at the rear o the queue
{
    node *newNode = new node();
    newNode->info = data;
    newNode->next = NULL;
    if (rear == NULL)
    {
        rear = newNode;
        front = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

int dequeue()/*Dequeues (removes) the front element from the queue,
 updates front and rear pointers if needed, and returns the dequeued item's value.*/
{
    int item = -1;
    if (front == NULL)
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        node *temp = front;
        item = temp->info;
        if (temp->next == NULL)
        {
            front = NULL;
            rear = NULL;
        }
        else
        {
            front = temp->next;
        }
        delete temp;
    }
    return item;
}

void display()//display elements of queue
{
    if (front == NULL)
    {
        cout << "Queue: empty." << endl;
    }
    else
    {
        node *temp = front;
        cout << "Queue is: ";
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
        cout << "Queue Operations:" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Exit" << endl;
        display();
        cout << "Choose operation: ";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Enter an item: ";
            cin >> item;
            enqueue(item);
            break;
        case 2:
            item = dequeue();
            if (item != -1)
                cout << item << " is dequeued." << endl;
            break;
        case 3:
            exit(0);
        default:
            cout << "Enter correct option." << endl;
        }
    }
    return 0;
}
