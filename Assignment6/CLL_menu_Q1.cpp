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

    void InsAtBegin(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            newNode->next = head;
        }
        else
        {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
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

    void InsSpecific(int val, int position)
    {
        if (position < 0)
            return;

        if (position == 0)
        {
            InsAtBegin(val);
        }
        else
        {
            Node *temp = head;
            for (int i = 0; i < position - 1 && temp->next != head; i++)
            {
                temp = temp->next;
            }

            if (temp == tail)
            {
                InsAtEnd(val);
            }
            else
            {
                Node *newNode = new Node(val);
                newNode->next = temp->next;
                temp->next = newNode;
            }
        }
    }

    void delAtPos(int position)
    {
        if (head == NULL)
        {
            return;
        }
        else if (position == 0)
        {
            if (head == tail)
            {
                delete head;
                head = tail = NULL;
            }
            else
            {
                Node *temp = head;
                head = head->next;
                tail->next = head;
                temp->next = NULL;
                delete temp;
            }
        }
        else
        {
            Node *temp = head;
            for (int i = 0; i < position - 1 && temp->next != head; i++)
            {
                temp = temp->next;
            }

            if (temp->next == tail)
            {
                Node *temp3 = tail;
                temp->next = head;
                tail = temp;
                temp3->next = NULL;
                delete temp3;
            }
            else
            {
                Node *temp2 = temp->next;
                temp->next = temp->next->next;
                temp2->next = NULL;
                delete temp2;
            }
        }
    }

    void display()
    {
        if (head == NULL)
            return;
        Node *temp = head;
        do
        {
            cout << temp->data << "->";
            temp = temp->next;
        } while (temp != head);
        cout << "(head)" << endl;
    }

    bool search(int key)
    {
        if (head == NULL)
            return false;
        Node *temp = head;
        do
        {
            if (temp->data == key)
                return true;
            temp = temp->next;
        } while (temp != head);
        return false;
    }
};

int main()
{
    CLL list;
    int choice, val, pos;
    do
    {
        cout << "\n1.Insert Begin\n2.Insert End\n3.Insert Specific\n4.Delete Position\n5.Display\n6.Search\n0.Exit\nEnter choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            list.InsAtBegin(val);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> val;
            list.InsAtEnd(val);
            break;
        case 3:
            cout << "Enter value and position: ";
            cin >> val >> pos;
            list.InsSpecific(val, pos);
            break;
        case 4:
            cout << "Enter position: ";
            cin >> pos;
            list.delAtPos(pos);
            break;
        case 5:
            list.display();
            break;
        case 6:
            cout << "Enter value to search: ";
            cin >> val;
            if (list.search(val))
                cout << "Found\n";
            else
                cout << "Not Found\n";
            break;
        }
    } while (choice != 0);
    return 0;
}
