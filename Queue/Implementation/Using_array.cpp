#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Using_array {
private:
    int *arr;
    int rear, front, n;

public:
    Using_array(int n) {
        this->n = n;  // Store n
        arr = new int[n];
        rear = -1;
        front = -1;
    }

    ~Using_array() {
        delete[] arr;
        cout << "Memory has been deleted" << endl;
    }

    bool isEmpty() {
        return (rear == -1);
    }

    bool isFull() {
        return (rear == n - 1);
    }

    void push(int num) {
        if (isFull()) {
            cout << "Queue is full. Cannot insert " << num << endl;
            return;
        }
        if (rear == -1 && front == -1) { // First insertion
            front = 0;
        }
        rear++;
        arr[rear] = num;
        cout << num << " inserted into the queue." << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot remove element." << endl;
            return;
        }
        cout << arr[front] << " removed from the queue." << endl;
        front++;
        if (front > rear) { // Reset when queue becomes empty
            front = rear = -1;
        }
    }

    void top() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Front element: " << arr[front] << endl;
    }
};

int main() {
    int size;
    cout << "Enter queue size: ";
    cin >> size;
    Using_array UA(size);

    UA.push(5);
    UA.push(10);
    UA.push(15);
    UA.top();
    UA.pop();
    UA.top();
    UA.pop();
    UA.pop();
    UA.pop(); // Trying to pop from empty queue

    return 0;
}
