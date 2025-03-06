#include <iostream>
using namespace std;

class Node {
public:  // Make members public for simplicity
    int data;
    Node* next;

    // Constructor to initialize a node
    Node(int d) {
        this->data = d;
        this->next = nullptr;
    }
};

// Function to insert a node at the start of the list
void insertAtStart(Node*& head, int d) {
    Node* temp = new Node(d); // Create a new node
    temp->next = head;        // Point the new node to the current head
    head = temp;              // Update the head to the new node
}

// Function to insert a node at the End of the list
void insertAtEnd(Node* &tail,int d){
    Node* temp = new Node(d); // Create a new node
    if (tail == nullptr) {    // If the list is empty
        tail = temp;
        return;
    }
    tail->next = temp;        // Link the new node to the end of the list
    tail = temp;              // Update the tail to the new node
}
// Function to insert a node at the End of the list
void insertAtPosition(Node*& head, int position, int d) {
    // Create the new node
    Node* temp = new Node(d);

    // If adding at the start
    if (position == 1) {
        temp->next = head;
        head = temp;
        return;
    }

    // Traverse the list to the position before the desired location
    Node* current = head;
    int count = 1;
    while (count < position - 1 && current != nullptr) {
        current = current->next;
        count++;
    }

    // If position is invalid (greater than the length of the list)
    if (current == nullptr) {
        cout << "Position out of bounds!" << endl;
        delete temp; // Clean up the memory for the new node
        return;
    }

    // Insert the node
    temp->next = current->next;
    current->next = temp;
}


// Function to print the list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr; // Initialize an empty list
    Node* tail = nullptr; // Initialize an empty list

    insertAtStart(head, 10);
    tail = head;
    insertAtStart(head, 20);
    insertAtPosition(head,3,900);
    insertAtStart(head, 30);
    insertAtEnd(tail, 90);

    printList(head); // Output: 30 -> 20 -> 10 -> NULL

    return 0;
}
