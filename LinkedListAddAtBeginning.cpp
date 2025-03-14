#include<bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    Node* next;
};

class LinkedList 
{
    Node * head;

    public:
    LinkedList():head(NULL) {}

    void AddAtBeginning(int data)
    {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    } 

    void display()
    {
    Node* temp = head;
    while(temp)
    {
        cout << temp->data << " ";
        temp = temp->next; 
    }
    }
};

int main()
{
    LinkedList list;

    list.AddAtBeginning(110);
    list.AddAtBeginning(100);
    list.AddAtBeginning(90);
    list.AddAtBeginning(80);
    list.AddAtBeginning(70);
    list.AddAtBeginning(60);
    list.AddAtBeginning(50);
    list.AddAtBeginning(40);
    list.AddAtBeginning(30);
    list.AddAtBeginning(20);
    list.AddAtBeginning(10);

    list.display();
}