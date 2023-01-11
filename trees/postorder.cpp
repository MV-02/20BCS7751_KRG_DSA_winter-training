#include <bits/stdc++.h>
using namespace std;
struct node
{
    char data;
    node *left, *right;

    node(char val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void post(node *root)
{
    if (root == NULL)
    {
        return;
    }

    post(root->left);
    post(root->right);
    cout << root->data;
}

int main()
{
    node *root = new node('A');
    root->left = new node('B');
    root->left->left = new node('D');
    root->left->right = new node('E');
    root->right = new node('C');
    root->right->right = new node('F');
    root->left->right->left = new node('G');
    root->left->right->right = new node('H');
    root->right->right->left = new node('I');
    root->right->right->right = new node('J');


    post(root);

    return 0;
}