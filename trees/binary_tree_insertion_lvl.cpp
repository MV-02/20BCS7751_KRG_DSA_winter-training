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

	cout << "Inorder traversal before insertion: ";
	inorder(root);
	// cout << endl;

	// int key = 12;

	// cout << "Inorder traversal after insertion: ";
	// inorder(root);
	// cout << endl;

	return 0;
}
