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

bool isCircular(Node *head)
{
    if (head == NULL)
        return false;

    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }

    if (temp == head)
        return true;

        else
        return false;

}

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    head->next = second;
    second->next = third;
    third->next = head; // make it circular

    if (isCircular(head))
        cout << "Circular Linked List";
    else
        cout << "Not Circular Linked List";

    return 0;
}
