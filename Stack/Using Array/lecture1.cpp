#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow"
                 << "\n";
        }
    }

    int pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }
    int peek()
    {
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
        }
    }
    bool isEmpty()
    {
        if(top==-1){
            return true;
        }
        return false;
    }
};

int main()
{


 Stack st(5);
 st.push(22);
 st.push(12);

 cout<<st.peek()<<endl;
 st.pop();
 cout<<st.peek()<<endl;

cout<<st.isEmpty()<<endl;;

st.pop();
st.pop();
st.pop();
 st.push(22);
 st.push(12);
  st.push(22);
 st.push(12);
  st.push(22);
 st.push(12);
 
    return 0;
}