#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *left, *right;
};

Node *createNode(int val)
{
    Node *newnode = new Node;
    if (!newnode)
    {
        cout << "Memory error\n";
        return NULL;
    }
    newnode->left = newnode->right = NULL;
    newnode->val = val;
    return newnode;
}

Node *insert(Node *root, int val)
{
    if (root == NULL)
    {
        root = createNode(val);
        return root;
    }

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *tmp = q.front();
        q.pop();
        if (val < tmp->val)
        {
            if (tmp->left != NULL)
            {
                q.push(tmp->left);
            }
            else
            {
                tmp->left = createNode(val);
                return root;
            }
        }
        else
        {
            if (tmp->right != NULL)
            {
                q.push(tmp->right);
            }
            else
            {
                tmp->right = createNode(val);
                return root;
            }
        }
    }
}
void inorder(Node* temp)
{
	if (temp == NULL)
		return;

	inorder(temp->left);
	cout << temp->val << ' ';
	inorder(temp->right);
}

int main()
{
    int arr[] = {90, 20, 9, 28, 43, 12, -20};
    Node * root=NULL;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
           root= insert(root,arr[i]);

    }
    inorder(root);
    
    return 0;
}