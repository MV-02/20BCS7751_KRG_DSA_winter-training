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
void leaf(node *root)
{
    if (root == NULL)
    {
        return;
    }
    leaf(root->left);
    leaf(root->right);
    if (root->left == NULL && root->right == NULL)
    {

        free(root);
        return;
    }
}

void in(node *root)
{
    if (root == NULL)
    {
        return;
    }

    in(root->left);
    cout << root->data;
    in(root->right);
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


    leaf(root);

    in(root);

    return 0;
}