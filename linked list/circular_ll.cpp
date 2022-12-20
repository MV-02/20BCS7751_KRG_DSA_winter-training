#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head = (node *)malloc(sizeof(node));

node *insertat_end(node *head, int data)
{

    node *ptr = (node *)malloc(sizeof(node));
    node *tmp = head;
    ptr->data = data;
    ptr->next = head;
    while (head->next != tmp)
    {
        head = head->next;
    }
    head->next=ptr;

    
    return tmp;
}
node *insertat_first(node *head, int data)
{
    node *tmp = head;
    node *ptr = new node;
    ptr->next=head;
    ptr->data=data;
    while (head->next != tmp)
    {
        head = head->next;
    }
    head->next=ptr;
    return(ptr);
    
}
node *deleteat_first(node *head)
{
    cout << head->data << endl;
    node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
node *deleteat_end(node *head)
{
    node *tmp = head;
    node *ptr = new node;
    ptr = head;
    head = head->next;
    while (head->next != NULL)
    {
        ptr = ptr->next;
        head = head->next;
    }
    cout << head->data << endl;
    ptr->next = NULL;
    free(head);
    return tmp;
}
void show(node *head)
{
    node *tmp = head;
    while (head->next != tmp)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << head->data << "<-";
}
int cnt(node *head)
{
    node *tmp = head;
    int c = 0;
    while (head->next != tmp)
    {
        head = head->next;
        c++;
    }
    return ++c;
}

int main()
{
    head->data = 0;
    head->next = head;
    // node *a = new node;
    // node *b = new node;

    // a->data = 15;
    // b->data = 30;
    // head->next = a;
    // a->next = b;
    // b->next = head;
    // show(head);

    // head=insertat_end(head,5);
    // head=insertat_end(head,10);
    // head = insertat_end(head, -10);
    // head = insertat_first(head, -5);
    head = insertat_first(head, 3);
    head = insertat_first(head, 5);
    head = insertat_end(head, 80);
    // head = insertat_end(head, 60);
    // show(head);
    // cout<<endl;
    // cout<<"No of nodes in Linked list ="<<cnt(head);
    // head = deleteat_end(head);
    // head = deleteat_end(head);
    // head = insertat_first(head, 20);
    // cout << cnt((head));
    show(head);

    return 0;
}