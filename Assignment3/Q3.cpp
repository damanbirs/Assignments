#include <iostream>
#include <cstring>
using namespace std;

#define MAX 100

int main ()
{
    cout << "Q3: Balanced Parentheses Check" << endl;

    char exp[MAX];
    cout << "Enter expression: ";
    cin >> exp;

    char stackArr[MAX];
    int top = -1;
    bool balanced = true;

    for (int i = 0; i < strlen(exp); i++)
    {
        char c = exp[i];

        if (c == '(' || c == '{' || c == '[')
        {
            stackArr[++top] = c;
        }
        else if (c == ')' || c == '}' || c == ']')
        {
            if (top == -1)
            {
                balanced = false;
                break;
            }
            char open = stackArr[top--];
            if ((c == ')' && open != '(') ||
                (c == '}' && open != '{') ||
                (c == ']' && open != '['))
            {
                balanced = false;
                break;
            }
        }
    }

    if (top != -1) balanced = false;

    if (balanced)
        cout << "Expression is balanced" << endl;
    else
        cout << "Expression is NOT balanced" << endl;

    return 0;
}
