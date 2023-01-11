#include <bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node *left, *right;
};

node *create(int val)
{
    node *newnode = new node;
    if (newnode == NULL)
    {
        cout << "Stack full";
        return NULL;
    }
    newnode->val = val;
    newnode->left = newnode->right = NULL;
    return newnode;
}

node **find(node *root)
{
    if (root == NULL)
    {
        return &root;
    }

    queue<node *> a;
    a.push(root);
    while (!a.empty())
    {
        node *tmp = a.front();
        a.pop();
        if (tmp->left != NULL)
        {
            a.push(tmp->left);
        }
        else
        {
            return &(tmp->left);
        }
        if (tmp->right != NULL)
        {
            a.push(tmp->right);
        }
        else
        {
            return &(tmp->right);
        }
    }
}

void inorder(node *temp)
{
    if (temp == NULL)
        return;

    inorder(temp->left);
    cout << temp->val << ' ';
    inorder(temp->right);
}

int main()
{
    node *root = create(1);
    root->left = create(2);
    root->left->left = create(4);
    root->left->right = create(5);
    root->right = create(3);

    // inorder(root);
    node ** t=find(root);
    *t=create(6);
    t=find (root);
    *t=create (7);
    t=find (root);
    *t=create (8);
    inorder(root);

    return 0;
}