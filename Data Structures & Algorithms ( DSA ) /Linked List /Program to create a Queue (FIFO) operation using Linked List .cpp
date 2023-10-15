#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;

void push(int x)
{
    struct node *ADP=new node;
    ADP->data=x;
    ADP->next=NULL;
    if(head==NULL)
    head=ADP;
    else
    {
        struct node *ptr=head;
        for(ptr=head; ptr->next!=NULL; ptr=ptr->next){}
        ptr->next=ADP;
    }
}

void display()
{
    struct node *ptr=head;
    for(ptr=head; ptr->next!=NULL; ptr=ptr->next)
    cout<<ptr->data<<"->";
    cout<<ptr->data;
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    display();
}
