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

int* values(Node * temp){
    int  a[7],i=0;
    if (temp == NULL)
		return 0;

	inorder(temp->left);
	a[i]=temp->val;
    i++;
	inorder(temp->right);
    return a;
}

Node* InsertNode(Node* root, int data)
{
	if (root == NULL) {
		root = createNode(data);
		return root;
	}

	queue<Node*> q;
	q.push(root);

	while (!q.empty()) {
		Node* temp = q.front();
		q.pop();

		if (temp->left != NULL)
			q.push(temp->left);
		else {
			temp->left = createNode(data);
			return root;
		}

		if (temp->right != NULL)
			q.push(temp->right);
		else {
			temp->right = createNode(data);
			return root;
		}
	}
}

int main()
{
    Node* root =InsertNode(NULL, 1);
    root =InsertNode(root, 2);
    root =InsertNode(root, 3);
    root =InsertNode(root, 4);
    root->left->left->right=createNode(5);
	root->right->left=createNode(6);
	root->left->right=createNode(7);
    int arr[] = {90, 20, 9, 28, 43, 12, -20};
    Node * rootbst=NULL;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
           rootbst= insert(rootbst,arr[i]);

    }
    // inorder(root);
    int i=0;
    int * a=values(root);
    for (int i = 0; i < 7; i++)
    {
        cout<<*(a+i);
    }
    
    
    return 0;
} 