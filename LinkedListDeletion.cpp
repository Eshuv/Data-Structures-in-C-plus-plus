#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

class LinkedList
{
    Node* head;
    public:
    LinkedList(): head(NULL) {}

    void AddAtBeginning(int data)
    {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }

    void DeleteFromBeginning()
    {
        if(!head)
        {
            cout << "Linked List is empty..." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void DeleteFromEnd()
    {
        if(!head)
        {
            cout << "Linked List is empty..." << endl;
            return;
        }
        if(!head->next)
        {
            delete head->next;
            head = NULL;
            return;
        }
        Node* temp = head;

        while(temp->next->next)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    void DeleteFromPosition(int pos)
    {
        if(!head)
        {
            cout << "Linked List is empty..." << endl;
            return;
        }
        if(pos == 1)
        {
            DeleteFromBeginning();
            return;
        }

        Node* temp = head;
        Node* currTemp;
        for(int i = 1; i < pos - 1 && temp; ++i)
        {
            temp = temp->next;
        }
        currTemp = temp->next;
        temp->next = temp->next->next;
        delete currTemp;
    }

    void display()
    {
        Node* temp = head;
        while(temp)
        {
            cout << temp->data << " ";
            temp = temp->next; 
        }
        cout << endl;    
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

    list.DeleteFromEnd();
    list.display();

    list.DeleteFromPosition(4);
    list.display();

    list.DeleteFromBeginning();
    list.display();
}