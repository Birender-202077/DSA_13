#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }

    // Printing a Binary Tree according to PostOrder Traversal

    void PostOrder(Node *node)
    {
        if(node == NULL)
            return;
    
        PostOrder(node->left);
        PostOrder(node->right);
        cout<<node->data<<" ";
    }

    // Printing a Binary Tree according to InOrder Traversal

    void InOrder(Node *node)
    {
        if(node == NULL)
            return;
    
        InOrder(node->left);
        cout<<node->data<<" ";
        InOrder(node->right);
    }

    // Printing a Binary Tree according to PreOrder Traversal

    void PreOrder(Node *node)
    {
        if(node == NULL)
            return;

        cout<<node->data<<" ";
        PreOrder(node->left);
        PreOrder(node->right);
    }
};



int main()
{
    Node *root = new Node(0);
    root->left = new Node(1);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);

    cout<<"\nPreOrder Traversal of Binary Tree is \n";
    (*root).PreOrder(root);

    cout<<"\nInOrder Traversal of Binary Tree is \n";
    (*root).InOrder(root);

    cout<<"\nPostOrder Traversal of Binary Tree is \n";
    (*root).PostOrder(root);

    cout<<endl;

    return 0;
}