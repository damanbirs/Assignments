#include <iostream>
using namespace std;

class Node
{
public:
    char data;
    Node *prev;
    Node *next;

    Node(char value)
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

    void insert(char val)
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

    bool isPalindrome()
    {
        if (head == NULL)
            return true;

        Node *start = head;
        Node *end = tail;

        while (start != end && start->prev != end)
        {
            if (start->data != end->data)
                return false;

            start = start->next;
            end = end->prev;
        }

        return true;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    DLL list;
    string s;
    cout << "Enter characters (string): ";
    cin >> s;

    for (char c : s)
    {
        list.insert(c);
    }

    cout << "Linked List: ";
    list.display();

    if (list.isPalindrome())
        cout << "It is a palindrome.\n";
    else
        cout << "It is not a palindrome.\n";

    return 0;
}
