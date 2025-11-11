#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class CLL
{
public:
    Node *head, *tail;
    CLL()
    {
        head = tail = NULL;
    }

    void InsAtEnd(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            newNode->next = head;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }
    }

    void display()
    {
        if (head == NULL)
            return;

        Node *temp = head;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);

        cout << head->data << endl;
    }
};

int main()
{
    CLL list;
    list.InsAtEnd(20);
    list.InsAtEnd(100);
    list.InsAtEnd(40);
    list.InsAtEnd(80);
    list.InsAtEnd(60);

    list.display();
    return 0;
}
