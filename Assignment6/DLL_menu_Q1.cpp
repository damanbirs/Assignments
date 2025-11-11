#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int value)
    {
        data = value;
        prev = next = NULL;
    }
};

class DLL
{
    Node *head;
    Node *tail;

public:
    DLL()
    {
        head = tail = NULL;
    }

    void PushFront(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void PushBack(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void InsertAtPos(int val, int pos)
    {
        if (pos < 0)
            return;

        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }

        if (pos == 0)
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
            return;
        }

        Node *temp = head;
        for (int i = 0; i < pos - 1 && temp->next != NULL; i++)
        {
            temp = temp->next;
        }

        if (temp == tail)
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        else
        {
            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next->prev = newNode;
            temp->next = newNode;
        }
    }

    void DeleteByValue(int val)
    {
        if (head == NULL)
        {
            cout << "List is empty.\n";
            return;
        }

        Node *temp = head;


        while (temp != NULL && temp->data != val)
        {
            temp = temp->next;
        }

        if (temp == NULL)
        {
            cout << "Node with value " << val << " not found.\n";
            return;
        }

        if (temp == head && temp == tail)
        {
            head = tail = NULL;
        }
        else if (temp == head)
        {
            head = head->next;
            head->prev = NULL;
        }
        else if (temp == tail)
        {
            tail = tail->prev;
            tail->next = NULL;
        }
        else
        {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
        }

        delete temp;
        cout << "Node " << val << " deleted.\n";
    }

    void Search(int val)
    {
        Node *temp = head;
        int pos = 0;
        while (temp != NULL)
        {
            if (temp->data == val)
            {
                cout << "Node " << val << " found at position " << pos << ".\n";
                return;
            }
            temp = temp->next;
            pos++;
        }
        cout << "Node " << val << " not found.\n";
    }

    void Display()
    {
        if (head == NULL)
        {
            cout << "List is empty.\n";
            return;
        }

        Node *temp = head;
        cout << "List: ";
        while (temp != NULL)
        {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};


int main()
{
    DLL list;
    int choice, val, pos;

    do
    {
        cout << "\n=== DOUBLY LINKED LIST MENU ===\n";
        cout << "1. Insert at Front\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Specific Position\n";
        cout << "4. Delete a Node by Value\n";
        cout << "5. Search for a Node\n";
        cout << "6. Display List\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert at front: ";
            cin >> val;
            list.PushFront(val);
            break;
        case 2:
            cout << "Enter value to insert at end: ";
            cin >> val;
            list.PushBack(val);
            break;
        case 3:
            cout << "Enter value and position: ";
            cin >> val >> pos;
            list.InsertAtPos(val, pos);
            break;
        case 4:
            cout << "Enter value to delete: ";
            cin >> val;
            list.DeleteByValue(val);
            break;
        case 5:
            cout << "Enter value to search: ";
            cin >> val;
            list.Search(val);
            break;
        case 6:
            list.Display();
            break;
        case 0:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
