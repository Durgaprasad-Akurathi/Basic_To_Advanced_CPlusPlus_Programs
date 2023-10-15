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
        ADP->next=head;
        head=ADP;
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
    push(60);
    push(70);
    push(80);
    push(90);
    push(100);
    
    display();
}
