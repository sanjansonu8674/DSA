#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    Node(){
        this -> data;
        this -> next = NULL;
    }        
};

//insert From Start
void insertAtHead(Node* &head, int d){
    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}


//insert From End
void insertAtTail(Node* &tail,int d){
    // new node create
    Node* temp = new Node(d);
    tail ->next = temp;
    tail = tail->next;
}

//insert from Specfic Position
void insertAtPosition(Node * tail,Node* head,int position, int d){
    //insert at start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    
    Node* temp = head;
    int cnt = 1;
    while (cnt < position-1)
    {
        temp = temp ->next;
        cnt++;
    }
    // insert at tail
    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert ->next = temp ->next;
    temp -> next = nodeToInsert;
}
void print(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {   
        cout<<temp -> data<<" ";
        // cout<<"data = "<<temp -> data<<" ";
        // cout<<"add = "<<temp -> next<<" ";
        // cout<<endl;
        temp = temp -> next;
    }
    cout<<endl;
}



int main(){
    //create a new node or heap
    Node* node1 = new Node();


    //head poined to node1;
    Node* head = node1;
    Node* tail = node1;

    // Element inserted
    insertAtHead(head, 12);
    insertAtHead(head, 14);
    insertAtPosition(tail,head,2,50);
    insertAtHead(head, 16);
    // insertAtTail(tail, 18);
    // insertAtTail(tail, 20);
    print(head);
    return 0;
}