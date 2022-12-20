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
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    ptr->data = data;
    ptr->next = NULL;
    tmp->next = ptr;
    return head;
}
node *insertat_first(node *head, int data)
{

    node *ptr = (node *)malloc(sizeof(node));

    ptr->data = data;
    ptr->next = head;
    return ptr;
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
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
}
int cnt(node *head)
{
    int c = 0;
    while (head != NULL)
    {
        c++;
        head = head->next;
    }
    return c;
}
node * oddeve(node *head)
{

    node *tmp = new node;
    tmp->data=head->data;
    tmp->next=NULL;
    head=head->next;
    while (head->next != NULL)
    {
        if (head->data % 2 != 0)
        {
            tmp = insertat_first(tmp, head->data);
        }
        else
        {
            tmp = insertat_end(tmp,head->data);
        }
        head = head->next;
    }
    return tmp;
}

int main()
{
    head->data = 0;
    head->next = NULL;
    // show(head);

    // head=insertat_end(head,5);
    // head=insertat_end(head,10);
    head = insertat_end(head, -10);
    head = insertat_first(head, -5);
    head = insertat_first(head, 3);
    head = insertat_first(head, 0);
    head = insertat_end(head, 80);
    head = insertat_end(head, 60);
    show(head);
    cout<<endl;
    // cout<<"No of nodes in Linked list ="<<cnt(head);
    // head = deleteat_end(head);
    // head = deleteat_end(head);
    // head = insertat_first(head, 20);
    show(oddeve(head));
    // show(head);

    return 0;
}