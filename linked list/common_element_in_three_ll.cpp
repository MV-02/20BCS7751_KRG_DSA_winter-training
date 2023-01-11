#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};

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

int common(node *head1, node *head2, node *head3)
{
    while (head1!=NULL)
    {
        
    
    while (head2 != NULL)
    {
        
        if (head1->data==head2->data)
        {
            while (head3!=NULL)
            {
                if(head3->data==head1->data)
                {
                    return head1->data;
                }
                head3=head3->next;
            }
            
        }
        
        head2 = head2->next;
    }
    head1=head1->next;
    }
    return -1;
}

int main()
{
    node * head1=new node;
    head1->next=NULL;
    head1->data=1;
    node * head2=new node;
    head2->next=NULL;
    head2->data=2;
    node * head3=new node;
    head3->next=NULL;
    head3->data=3;

    head1=insertat_end(head1,5);
    head2=insertat_end(head2,5);
    head1=insertat_end(head1,5);
    head3=insertat_end(head3,5);
    // show(head1);
    // cout<<endl;
    // show(head2);
    // cout<<endl;
    // show(head3);
    cout<<common(head1,head2,head3);

    return 0;
}