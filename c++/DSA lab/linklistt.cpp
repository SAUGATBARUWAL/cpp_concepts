#include <iostream>

using namespace std;

class Node
{
public:
    int info;
    Node *next;//declares a pointer to an object of type Node, commonly used to represent the next node in a linked list.
};

Node *head = nullptr;//declares a pointer named head that initially points to nullptr, indicating an empty linked list.

void insertBeginning(int data)//Inserts a new node with the given data at the beginning of the linked list.
{
    Node *newNode = new Node();
    newNode->info = data;
    newNode->next = head;
    head = newNode;
}

void insertEnd(int data)//Appends a new node with the specified data to the end of the linked list.
{
    Node *newNode = new Node();
    newNode->info = data;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insertAfter(int data, int location)
/*Inserts a new node with the given data after the node containing the specified location value,

 or prints an error message and deletes the new node if the location is not found.
*/
{
    Node *newNode = new Node();
    newNode->info = data;

    if (head == nullptr)
    {
        newNode->next = nullptr;
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp != nullptr && temp->info != location)
        {
            temp = temp->next;
        }

        if (temp != nullptr)
        {
            newNode->next = temp->next;
            temp->next = newNode;
        }
        else
        {
            cout << "Location not found." << endl;
            delete newNode;
        }
    }
}

void deleteBeginning()/*
Deletes the first node (head) of the linked list, printing an "Empty List" message if the list is already empty.*/
{
    if (head == nullptr)
    {
        cout << "Empty List." << endl;
    }
    else
    {
        Node *temp = head;
        head = temp->next;
        delete temp;
    }
}


void deleteSpecific(int deleteData)/*Deletes a node with the given data (deleteData) from the linked list
. If the list is empty, it prints "Empty List." If the node is not found, it prints "Node not found."*/
{
    if (head == nullptr)
    {
        cout << "Empty List." << endl;
    }
    else
    {
        Node *temp1 = head;
        Node *temp2 = nullptr;

        while (temp1 != nullptr && temp1->info != deleteData)
        {
            temp2 = temp1;
            temp1 = temp1->next;
        }

        if (temp1 != nullptr)
        {
            if (temp2 != nullptr)
            {
                temp2->next = temp1->next;
            }
            else
            {
                head = temp1->next;
            }

            delete temp1;
        }
        else
        {
            cout << "Node not found." << endl;
        }
    }
}

void traverse()//Iterates through the linked list, printing each node's information, and adds a newline at the end.
{
    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->info << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    insertEnd(22);
    insertBeginning(11);
    insertAfter(33, 22);

    traverse();

    deleteSpecific(22);
    cout << endl;

    traverse();

    return 0;
}
