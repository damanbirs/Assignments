#include <iostream>
#include <cstring>
using namespace std;

#define MAX 100

int precedence (char op)
{
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

int main ()
{
    cout << "Q4: Infix to Postfix Conversion" << endl;

    char infix[MAX], postfix[MAX], stackArr[MAX];
    int top = -1, k = 0;

    cout << "Enter infix expression: ";
    cin >> infix;

    for (int i = 0; i < strlen(infix); i++)
    {
        char c = infix[i];

        if (isalnum(c))
        {
            postfix[k++] = c;
        }
        else if (c == '(')
        {
            stackArr[++top] = c;
        }
        else if (c == ')')
        {
            while (top != -1 && stackArr[top] != '(')
            {
                postfix[k++] = stackArr[top--];
            }
            top--; 
        }
        else
        {
            while (top != -1 && precedence(stackArr[top]) >= precedence(c))
            {
                postfix[k++] = stackArr[top--];
            }
            stackArr[++top] = c;
        }
    }

    while (top != -1)
    {
        postfix[k++] = stackArr[top--];
    }

    postfix[k] = '\0';

    cout << "Postfix expression: " << postfix << endl;

    return 0;
}
