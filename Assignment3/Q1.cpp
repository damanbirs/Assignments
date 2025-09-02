#include <iostream>
using namespace std;

#define MAX 50

int stackArr[MAX], top = -1;

void push (int val)
{
    if (top == MAX - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        stackArr[++top] = val;
        cout << val << " pushed" << endl;
    }
}

void pop ()
{
    if (top == -1)
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        cout << stackArr[top--] << " popped" << endl;
    }
}

bool isEmpty ()
{
    return top == -1;
}

bool isFull ()
{
    return top == MAX - 1;
}

void display ()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
        {
            cout << stackArr[i] << " ";
        }
        cout << endl;
    }
}

void peek ()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Top element: " << stackArr[top] << endl;
    }
}

int main ()
{
    cout << "Q1: Menu Driven Stack using Array" << endl;

    int choice, val;

    do
    {
        cout << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. isEmpty" << endl;
        cout << "4. isFull" << endl;
        cout << "5. Display" << endl;
        cout << "6. Peek" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1: 
                cout << "Enter value: ";
                cin >> val;
                push(val);
                break;

            case 2: 
                pop();
                break;

            case 3: 
                if (isEmpty())
                    cout << "Stack is empty" << endl;
                else
                    cout << "Stack is not empty" << endl;
                break;

            case 4: 
                if (isFull())
                    cout << "Stack is full" << endl;
                else
                    cout << "Stack is not full" << endl;
                break;

            case 5: 
                display();
                break;

            case 6: 
                peek();
                break;

            case 7: 
                cout << "Exiting..." << endl;
                break;

            default: 
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 7);

    return 0;
}
