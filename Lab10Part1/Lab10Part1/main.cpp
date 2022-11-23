#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* left, * right;
};

Node* createNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
void inOrder(struct Node* node)
{
    if (node == NULL)
        return;

    inOrder(node->left);

    cout << node->data << " ";

    inOrder(node->right);
}
void preOrder(struct Node* node)
{
    if (node == NULL)
        return;
    
    cout << node->data << " ";

    preOrder(node->left);

    preOrder(node->right);
}

void postOrder(struct Node* node)
{
    if (node == NULL)
        return;
    postOrder(node->left);
    postOrder(node->right);
    cout << node->data << " ";
}

int main()
{
    struct Node* root = createNode(1);
    root->left = createNode(2);
   root->left->left = createNode(4);
   root->left->right = createNode(5);

   root->right = createNode(3);  
    

    cout << "\nPreorder traversal of binary tree is \n";
    preOrder(root);
    
    cout << "\nInorder traversal of binary tree is \n";
    inOrder(root);

    cout << "\nPostorder traversal of binary tree is \n";
    postOrder(root);

    




    return 0;
}
