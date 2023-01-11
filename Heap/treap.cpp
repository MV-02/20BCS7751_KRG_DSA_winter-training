#include <bits/stdc++.h>
using namespace std;

struct Node
{
    char key;
    int priority;
    Node *left, *right;
};

Node *createNode(char key, int priority)
{
    Node *newnode = new Node;
    if (!newnode)
    {
        cout << "Memory error\n";
        return NULL;
    }
    newnode->left = newnode->right = NULL;
    newnode->key = key;
    newnode->priority = priority;
    return newnode;
}

Node *rightRotate(Node *y)
{
    Node *x = y->left, *T2 = x->right;

    x->right = y;
    y->left = T2;

    return x;
}

Node *leftRotate(Node *x)
{
    Node *y = x->right, *T2 = y->left;

    y->left = x;
    x->right = T2;

    return y;
}

Node *insert(Node *root, char key, int priority)
{
    if (root == NULL)
    {
        root = createNode(key, priority);
        return root;
    }

    if (key < root->key)
    {
        root->left = insert(root->left, key, priority);
        if (root->left->priority > root->priority)
        {
            root = rightRotate(root);
        }
    }
    else
    {
        root->right = insert(root->right, key, priority);
        if (root->right->priority > root->priority)
        {
            root = leftRotate(root);
        }
    }
    return root;
}
void inorder(Node *temp)
{
    if (temp == NULL)
        return;

    inorder(temp->left);
    cout << temp->key <<'/'<<temp->priority<< ' ';

    inorder(temp->right);
}

int main()
{
    Node *root = NULL;

    root=insert(root,'L',15);
    root=insert(root,'T',10);
    root=insert(root,'E',8);
    root=insert(root,'Q',5);
    // root=insert(root,'Z',7);
    // root=insert(root,'R',20);
    cout<<root->key<<endl;
    inorder(root);

    return 0;
}