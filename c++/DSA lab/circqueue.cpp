#include<iostream>
using namespace std;

class Queue
{
    int Size;
    int FRONT, REAR;
    int *QUEUE;

public:
    Queue(int);
    void getrearfront()
    {
        cout << "\nFront = " << FRONT << " and Rear = " << REAR;
    }
    bool IsFull();
    bool IsEmpty();
    void Enqueue(int);
    int Dequeue();
    void display();
    ~Queue() { delete[] QUEUE; }
};

Queue::Queue(int MaxSize)
{
    Size = MaxSize;
    FRONT = -1;
    REAR = -1;
    QUEUE = new int[Size];
}

bool Queue::IsFull()
{
    return (REAR + 1) % Size == FRONT;
}

bool Queue::IsEmpty()
{
    return REAR == -1;
}

void Queue::Enqueue(int item)
{
    if (IsFull())
        cout << "\nQueue is Full.";
    else
    {
        if (FRONT == -1 && REAR == -1)
        {
            FRONT = REAR = 0;
        }
        else
        {
            REAR = (REAR + 1) % Size;
        }
        QUEUE[REAR] = item;
    }
}

int Queue::Dequeue()
{
    int item;
    if (IsEmpty())
    {
        cout << "\nQueue is empty";
        return 0;
    }
    else
    {
        item = QUEUE[FRONT];
        if (FRONT == REAR)
        {
            FRONT = REAR = -1;
        }
        else
        {
            FRONT = (FRONT + 1) % Size;
        }
    }
    return item;
}

void Queue::display()
{
    if (IsEmpty())
    {
        cout << "\nQueue is empty.";
    }
    else
    {
        int i = FRONT;
        cout << "\n Queue: ";
        while (i != REAR)
        {
            cout << QUEUE[i] << " ";
            i = (i + 1) % Size;
        }
        cout << QUEUE[i] << " ";
    }
}

int main()
{
    Queue que(3);
    que.Enqueue(11);
    que.Enqueue(22);
    que.Enqueue(33);
    que.display();

    que.Enqueue(44);
    que.display();

    que.getrearfront();
    que.Dequeue();
    que.getrearfront();
    que.Enqueue(55);
    que.getrearfront();
    que.display();

    que.Dequeue();
    que.Dequeue();
    que.display();

    que.Enqueue(66);
    que.getrearfront();
    que.display();

    return 0;
}
