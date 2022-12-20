#include <bits/stdc++.h>
using namespace std;

struct node
{
    char val;
    node *next;
};

node *add(node *head, char n)
{
    node *tmp = head;
    if (head->val == '\0')
    {
        head->val = n;
        return head;
    }
    else
    {
        node *ptr = new node;
        ptr->val = n;
        ptr->next = NULL;
        while (head->next != NULL)
        {
            head = head->next;
        }

        head->next = ptr;
    }
    return tmp;
}

node * rev(node *head)
{
    node *ptr = new node;
    ptr->next = NULL;
    ptr->val = '\0';
    node *tmp = head;
    int cnt = 0,j=0;
    while (head->next != NULL)
    {
        head = head->next;
        cnt++;
    }
    head=tmp;
    for (int i = cnt; i >=0; i--)
    {
        
        head = tmp;
        j=i;
        while (j>0)
        {
            head = head->next;
            j--;
        }
        ptr = add(ptr, head->val);
        
    }
    return ptr;
}

bool palindrome(node * head, node * revhead){
    
    while (head != NULL)
    {
        if (head->val!=revhead->val)
        {
            return false;
        }
        
        head = head->next;
        revhead = revhead->next;
    }
    return true;
    
}
void show(node *inp)
{
    while (inp != NULL)
    {
        cout << inp->val;
        inp = inp->next;
    }
}

int main()
{
    // char c=0;
    node *inp = new node;
    inp->val = '\0';
    inp->next = NULL;
    char a = 'a';
    cout << "Enter String" << endl;
    while (1)
    {
        cin >> a;
        if (a=='&')
        {
            break;
        }
        
        inp = add(inp, a);
    }
    // show(inp);
    // cout<<endl;
    // node * reverse=rev(inp);
    // show (reverse);
    cout<<palindrome(inp,rev(inp));
    return 0;
}