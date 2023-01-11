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
void inorder(vector<int> &arr, Node *temp)
{
    if (temp == NULL)
        return;

    inorder(arr, temp->left);
    arr.push_back(temp->val);
    inorder(arr, temp->right);
}

vector<int> merge(vector<int> a, vector<int> b)
{
    vector<int> res;
    while(a.size()!=0&&b.size()!=0)
    {
        if (a[0]<b[0])
        {
            res.push_back(a[0]);
            a.erase(a.begin());
        }
        else
        {
            res.push_back(b[0]);
            b.erase(b.begin());
        }
        
    }
    while(a.size()!=0)
    {
            res.push_back(a[0]);
            a.erase(a.begin());
        
        
    }
    while(b.size()!=0)
    {
            res.push_back(b[0]);
            b.erase(b.begin());
        
        
    }

    return res;
}
int main()
{
    int arr[] = {9, 4, 12, 0, 8, 11, 15};
    Node *root1 = NULL;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        root1 = insert(root1, arr[i]);
    }
    vector<int> arr1, arr2;
    inorder(arr1, root1);
    cout << endl;
    int ar[] = {5, 3, 10, 2, 1, 7, 13};
    Node *root2 = NULL;
    for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++)
    {
        root2 = insert(root2, ar[i]);
    }
    inorder(arr2, root2);

    Node *root = NULL;
    vector<int> result=merge(arr1,arr2);
    int j=result.size()/2-1;
    for (int i = result.size()/2; i < result.size(); i++)
    {
        root = insert(root, result[i]);
        if(j>=0)
        root = insert(root, result[j]);
        j--;
    }
    
    arr1.clear();
    inorder(arr1, root);
    for (auto &&i : arr1)
    {
        cout<<i<<" ";
    }
    
    

    return 0;
}