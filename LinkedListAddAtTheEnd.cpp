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

    void AddAtTheEnd(int data)
    {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        Node* temp = head;

        if(temp == NULL)
        {
            head = newNode;
        }
        else
        {
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
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
    list.AddAtTheEnd(10);
    list.AddAtTheEnd(20);
    list.AddAtTheEnd(30);
    list.AddAtTheEnd(40);
    list.AddAtTheEnd(50);
    list.AddAtTheEnd(60);
    list.AddAtTheEnd(70);
    list.AddAtTheEnd(80);
    list.AddAtTheEnd(90);
    list.AddAtTheEnd(100);

    list.display();
}