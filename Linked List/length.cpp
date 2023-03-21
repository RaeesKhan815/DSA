#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int length(Node* head)
{
    int count=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

int main()
{
    Node* head=NULL;

    head=new Node;
    head->data=5;
    head->next=NULL;

    Node* newNode=new Node;
    newNode->data=10;
    newNode->next=NULL;
    head->next=newNode;

    newNode=new Node;
    newNode->data=15;
    newNode->next=NULL;
    head->next->next=newNode;


    cout<<"The length of the linked list is: "<<length(head)<<endl;

    return 0;
}
