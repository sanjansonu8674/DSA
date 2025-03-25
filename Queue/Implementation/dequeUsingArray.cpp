#include <iostream>
using namespace std;

class Queue
{
private:
    int *arr;
    int front, rear, size;

public:
    Queue(int size); // Constructor
    ~Queue();        // Destructor
    bool isEmpty();
    bool isFull();
    void enqueue(int x);
    void dequeue();
    void getFront();
};

// Constructor
Queue::Queue(int size)
{
    this->size = size;
    arr = new int[size];
    front = rear = -1;
}

// Destructor
Queue::~Queue()
{
    delete[] arr;
}

// Check if queue is empty
bool Queue::isEmpty()
{
    return front == -1;
}

// Check if queue is full
bool Queue::isFull()
{
    return (rear + 1) % size == front;
}

// Enqueue operation
void Queue::enqueue(int x)
{
    if (isFull())
    {
        cout << "Queue Overflow" << endl;
        return;
    }

    if (isEmpty())
    {
        front = rear = 0; // First element insertion
    }
    else
    {
        rear = (rear + 1) % size; // Circular increment
    }

    arr[rear] = x;
    cout << "Item inserted: " << x << endl;
}

// Dequeue operation
void Queue::dequeue()
{
    if (isEmpty())
    {
        cout << "Queue Underflow" << endl;
        return;
    }

    cout << "Item removed: " << arr[front] << endl;

    if (front == rear)
    {
        front = rear = -1; // Reset queue when empty
    }
    else
    {
        front = (front + 1) % size; 
    }
}

// Get front element
void Queue::getFront()
{
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Front element is: " << arr[front] << endl;
}

// Main function
int main()
{
    Queue q(5);
    q.enqueue(8);
    q.enqueue(5);
    q.getFront();
    q.dequeue();
    q.getFront();
    q.dequeue();
    q.dequeue(); // Checking underflow condition
    return 0;
}
