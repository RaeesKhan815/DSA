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

Node* deleteNode(Node* head, int data)
{
    Node* temp=head;
    Node* prev=NULL;

    while(temp!=NULL && temp->data!=data)
    {
        prev=temp;
        temp=temp->next;
    }

    if(temp==NULL)
    {
        return head;
    }

    if(temp==head)
    {
        head=head->next;
    }
    else
    {
        prev->next=temp->next;
    }
    delete temp;
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


    head=deleteNode(head, 10);

    display(head);

    return 0;
}
