#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int top;
    int capacity;

public:
    Stack(int size)
    {
        capacity = size;
        arr = new int[size];
        top = -1;
    }
    ~Stack()
    {
        delete[] arr;
    }
    bool isEmpty()
    {
        return top == -1;
    }
    bool isFull()
    {
        return top == capacity - 1;
    }
    void push(int value)
    {
        if (isFull())
        {
            cout << "Stack over flow. " << endl;
            return;
        }
        arr[++top] = value;
        cout << "Item Pushed into Stack. " << endl;
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Under flow. " << endl;
            return;
        }
        cout << arr[top--] << " Poped from stack. " << endl;
    }
    int Top()
    {
        if (isEmpty())
        {
            cout << "Stack Empty. " << endl;
            return -1;
        }
        return arr[top];
    }
    int size()
    {
        return top + 1;
    }
};
int main()
{
    int size;
    cout << "What should be Stack Size: " << endl;
    cin >> size;
    Stack st(size);
    for (int i = 0; i < size; i++)
    {
        int element;
        cout << "Enter Your Item. ";
        cin >> element;
        st.push(element);
    }
    for(int i = 0; i< size; i++){
        // cout<< "Item index at "<< i<<" is " <<st.Top()<<endl;
        st.pop();
        cout<<endl;
    }
    return 0;
}