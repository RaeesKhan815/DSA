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

int findMiddle(Node* head)
{
    Node* slowPtr=head;
    Node* fastPtr=head;
    while(fastPtr!=NULL && fastPtr->next!=NULL)
    {
        slowPtr=slowPtr->next;
        fastPtr=fastPtr->next->next;
    }
    return slowPtr->data;
}

int main()
{
    Node* head=NULL;

    head=addNode(head, 5);
    head=addNode(head, 10);
    head=addNode(head, 15);
    head=addNode(head, 20);
    head=addNode(head, 25);

    cout<<"The middle element of the linked list is: "<<findMiddle(head)<<endl;

    return 0;
}
