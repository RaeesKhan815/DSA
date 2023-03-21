#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* addNode(Node* head, int data)
{
    Node* newNode=new Node;
    newNode->data=data;
    newNode->next=head;
    head=newNode;
    return head;
}

Node* reverseList(Node* head)
{
    Node* prev=NULL;
    Node* curr=head;
    Node* next=NULL;

    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    return head;
}

void display(Node* head)
{
    if(head==NULL)
    {
        cout<<"The linked list is empty"<<endl;
        return;
    }
    cout<<"The linked list is: ";
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* head=NULL;

    head=addNode(head, 5);
    head=addNode(head, 10);
    head=addNode(head, 15);
    head=addNode(head, 20);

    display(head);

    head=reverseList(head);

    display(head);

    return 0;
}
