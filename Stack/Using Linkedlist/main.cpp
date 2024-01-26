#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Node
{

    int val;
    Node *next;
};

class myStack
{

    Node *head;
    int stackSize;

public:
    myStack()
    {
        head = NULL;
        stackSize = 0;
    }

    void push(int g)
    {
        Node *temp = new Node();
        temp->val = g;
        temp->next = head;
        head = temp;
        stackSize++;
        cout << "Element " << g << " pushed into the Stack " << endl;
    }

    void pop()
    {
        if (head == NULL)
            cout << "Stack is Empty,cannot pop an Element" << endl;
        Node *temp = head;
        cout << "Element " << temp->val << " popped from the Stack " << endl;
        head = head->next;
        delete temp;
        stackSize--;
    }
    int top()
    {
        if (!head)
        {
            cout << "No top Element" << endl;
            return -1;
        }
        return head->val;
    }

    bool isEmpty()
    {
        if (!head)
            return true;
        return false;
    }

    int size()
    {
        cout << "Size of Stack is " << stackSize << endl;
        return stackSize;
    }
};

int main()
{

    myStack s1;

    // s1.pop();
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.size();
    cout << "Top Element is " << s1.top() << endl;
    s1.pop();
    s1.size();

    return 0;
}