#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
void push(struct Node** Head, int node_data)//** is adress of fisrt var, *head is 
{
    //creating a new node
    struct Node* newnode1 = new Node;
    //assigning data to new node
    newnode1->data=node_data;
    //assigning the next element adress to first element
    newnode1->next=(*Head);
    //now head value is new element value adress
    (*Head)=newnode1;
}

void displaylist(struct Node* node)
{
    while(node!=NULL)
    {
    cout<<node->data<<",";
    node=node->next;
    }
}

void insert_node(struct Node* prevnode, int nodedata)
{
    if(prevnode!=NULL)
    {
        struct Node* newnode1=new Node;
        newnode1->data=nodedata;
        newnode1->next=prevnode->next;
        prevnode->next=newnode1;
    }
}

void append_node(struct Node** Head, int nodedata)
{
    struct Node* newnode1 = new Node;
    newnode1->data = nodedata;
    newnode1->next = NULL;
    if(*Head==NULL)
    {
        *Head = newnode1;
        return;    
    }
    struct Node* current = *Head;
    while(current->next!=NULL)
    {
        current = current->next;
    }

    current->next = newnode1;
}
//insert node at last function
int main()
{
// struct Node *new_node1 = new Node;
    //declaring head for storing starting adress of first node
    //head is the only pointer tell us about where is linked list
    struct Node* head=NULL;
    push(&head, 25);
    push(&head, 34);
    push(&head, 38);
    insert_node(head->next->next,15);
    insert_node(head->next,34);
    append_node(&head, 18);
    displaylist(head);


}