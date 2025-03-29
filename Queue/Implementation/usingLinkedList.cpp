#include <iostream>
using namespace std;
class List
{
private:
    int data;
    List *next;

public:
    List(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
class Queue
{
private:
    List *rear, *front;

public:
    Queue()
    {
        rear = nullptr;
        front = nullptr;
    }
    bool isEmpty()
    {
        return front == nullptr;
    }
    void push(int val)
    {
        
    }
};

int main()
{
    return 0;
}