#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Destructor

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for Node with Data " << value << endl;
    }
};

void insertAtHead(Node *&head, int d)
{

    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int d)
{
    // if (head == NULL)
    //     cout << "LinkedList is Empty" << endl;
    // Node *temp = head;
    // while (temp->next != NULL)
    // {
    //     temp = temp->next;
    // }
    // Node *t = new Node(d);
    // temp->next = t;
    if (tail == NULL)
        cout << "LinkedList is Empty" << endl;
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

int size(Node *&head)
{
    if (head == NULL)
        return 0;
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    if (position == 0)
    {
        insertAtHead(head, d);
        return;
    }

    if (position == size(head) + 1)
    {
        insertAtTail(tail, d);
        return;
    }
    Node *temp = head;
    int count = 0;
    while (count < position - 2)
    {
        temp = temp->next;
        count++;
    }
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node *&head)
{

    // deleting first or start node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free start ndoe
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void reverse(Node *&head)
{

    Node*prev=NULL;
    Node*curr=head;
    Node*forward;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
}

void print(Node *&head)
{
    if (head == NULL)
        cout << "LinkedList is Empty" << endl;

    Node *temp = head;

    while (temp != NULL)
    {
        cout << "Data = " << temp->data << " --> ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{

    Node *node1 = new Node(2);
    cout << node1->data << endl;
    cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtHead(head, 12);
    insertAtHead(head, 1);

    insertAtHead(head, 10);
    insertAtTail(tail, 89);

    insertAtPosition(head, tail, 0, -2);
    insertAtPosition(head, tail, 6, -2);
    insertAtPosition(head, tail, 6, -2);

    insertAtPosition(head, tail, 6, -2);
    insertAtPosition(head, tail, 10, -10);

    print(head);
    cout << "size -->" << size(head) << endl;

    cout << "tail  " << tail->data << endl;
    cout << "heaad  " << head->data << endl;

    cout << "From Here Deletion Part Starts: " << endl;
    deleteNode(10, head);
    print(head);
    cout << "size -->" << size(head) << endl;
    cout << "tail  " << tail->data << endl;
    cout << "heaad  " << head->data << endl;
    cout<<"Reversed Array "<<endl;

    reverse(head);
    print(head);
    return 0;
}