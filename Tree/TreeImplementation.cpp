#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int data)
    {
        val = data;
        left = nullptr;
        right = nullptr;
    }
};
Node *insertNode(Node *root, int data)
{
    if (root == nullptr)
    {
        return new Node(data);
    }
    if (data < root->val)
    {
        root->left = insertNode(root->left, data);
    }
    else
    {
        root->right = insertNode(root->right, data);
    }
    return root;
}

// Inorder Travesal
void inorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    inorder(root->left);
    cout << root->val<<" ";
    inorder(root->right);
}

int main()
{
    Node *root = nullptr;
    root = insertNode(root, 10);
    for (int i = 0; i < 10; i++)
    {
        int data;
        cout << "Enter your data: ";
        cin >> data;
        cout<<endl;
        insertNode(root, data);
    }

    cout<<"Inorder Traversal ";
    inorder(root);
    cout<<endl;
    return 0;
}