#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int top;
    int arr[5];

    public:
    Stack():top(-1) {}

    void push(int data)
    {
        if(top >= 4)
        {
            cout << "The stack is overflowed" << endl;
            return;
        }
        arr[++top] = data;
        cout << "Pushed the " << data << " in the stack." << endl;
    }

    int pop()
    {
        if(top < 0)
        {
            cout << "The stack is in underflow condition or empty" << endl;
            return 0;
        }
        return arr[top--];
    }

    void Peek()
    {
        cout << arr[top] << endl;
    }
};

int main()
{
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(60);
    stack.push(60);
    

    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();

    stack.Peek();

    stack.pop();
    stack.pop();
}