#include <iostream>
using namespace std;

class List {
public:
    int data;
    List* next;
    List(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Queue {
private:
    List* rear, * front;

public:
    Queue() {
        rear = nullptr;
        front = nullptr;
    }

    // Check if queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Push an element (Enqueue)
    void push(int val) {
        List* newNode = new List(val);
        if (rear == nullptr) {
            rear = front = newNode;
        }
        else {
            rear->next = newNode; 
            rear = newNode;       
        }
        cout << "Your item " << val << " pushed successfully\n";
    }

    // Pop an element (Dequeue)
    void pop() {
        if (isEmpty()) {
            cout << "Your queue is Empty\n";
            return;
        }
        List* temp = front;
        front = front->next;  // Fix: Move front forward
        if (front == nullptr) { // Fix: If queue becomes empty, update rear
            rear = nullptr;
        }
        cout << temp->data << " is popped from Queue\n";
        delete temp;
    }

    // Get front element
    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return front->data;
    }

    // Display queue elements
    void Display() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        List* temp = front;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;  // Fix: Move pointer forward
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.Display();

    q.pop();
    q.Display();

    cout << "Front element: " << q.getFront() << endl;

    q.push(40);
    q.push(50);
    q.Display();
    
    return 0;
}
