#include <iostream>
#include <queue>
using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;
};

Node* CreateNode(int data)
{
	Node* newNode = new Node();
	if (!newNode) {
		cout << "Memory error\n";
		return NULL;
	}
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

Node* InsertNode(Node* root, int data)
{
	if (root == NULL) {
		root = CreateNode(data);
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
			temp->left = CreateNode(data);
			return root;
		}

		if (temp->right != NULL)
			q.push(temp->right);
		else {
			temp->right = CreateNode(data);
			return root;
		}
	}
}

int height(Node * root){
    if (root==NULL)
    {
        /* code */
        return 0;
    }
    
    int lefth=height(root->left);
    int righth=height(root->right);
    

    return (max(lefth+1,righth+1));

}

bool balanced(Node * root){
    int left,right;

    if (root==NULL )
    {
        return true;
    }
    left=height(root->left);
    right=height(root->right);
    if (abs(left-right)<=1&&balanced(root->left)&&balanced(root->right))
    {
        return 1;
    }
    
    
    return false;
}

void inorder(Node* temp)
{
	if (temp == NULL)
		return;

	inorder(temp->left);
	cout << temp->data << ' ';
	inorder(temp->right);
}
int main()
{
	Node* root =InsertNode(NULL, 1);
    root =InsertNode(root, 2);
    root =InsertNode(root, 3);
    root =InsertNode(root, 4);
    root->left->left->right=CreateNode(5);
	root->right->left=CreateNode(6);
	root->left->right=CreateNode(7);

	// cout << "Inorder traversal before insertion: ";
	// inorder(root);
    // cout<<height(root->left);
    // cout<<height(root->right);
	// cout << endl;

	// int key = 12;

	// cout << "Inorder traversal after insertion: ";
	// inorder(root);
	// cout << endl;


    cout<<balanced(root);

	return 0;
}
