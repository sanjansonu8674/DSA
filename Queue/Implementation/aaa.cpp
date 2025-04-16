#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int data)
  {
    this->data = data;
    this->next = nullptr;
  }
};

// Insert at head
void insertAtHead(Node *&head, int val)
{
  Node *newNode = new Node(val);
  newNode->next = head;
  head = newNode;
}

// Insert at tail
void insertAtTail(Node *&head, int val)
{
  Node *newNode = new Node(val);
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  Node *temp = head;
  while (temp->next != nullptr)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}

// Display the list
void display(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

int main()
{
  Node *head = nullptr;

  insertAtTail(head, 10);
  insertAtTail(head, 20);
  insertAtHead(head, 5);
  insertAtTail(head, 30);
  insertAtHead(head, 95);

  display(head);

  return 0;
}
