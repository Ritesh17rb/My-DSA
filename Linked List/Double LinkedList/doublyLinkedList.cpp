#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node *prev;

    // Constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

int getLength(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void insertAtHead(Node *&head, int d)
{
    Node *newNode = new Node(d);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insertAtTail(Node *&head, int d)
{
    Node *newNode = new Node(d);
    Node *t = head;
    while (t->next != NULL)
    {
        t = t->next;
    }
    t->next = newNode;
    newNode->prev = t;
}

void insertAtPosition(Node *head, int position, int d)
{

    if (position == 1)
    {
       
        insertAtHead(head, d);
         
       
    }

    Node *t = head;
    int count = 1;
    while (count < position - 1)
    {
        t = t->next;
        count++;
    }
    Node *newNode = new Node(d);
    newNode->next = t->next;
    t->next=newNode;
    newNode->prev = t;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(1);
    Node *head = node1;

    print(head);
    cout << "Length of LinkedList is " << getLength(head) << endl;

    cout << "Insert at Head " << endl;

    insertAtHead(head, 12);
    insertAtTail(head, 13);
    insertAtTail(head, 14);
    insertAtPosition(head,1,100);
    insertAtHead(head, 120);

    print(head);

    return 0;
}