#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

#define MAX 100

int main ()
{
    cout << "Q5: Postfix Expression Evaluation" << endl;

    char exp[MAX];
    cout << "Enter postfix expression: ";
    cin >> exp;

    int stackArr[MAX];
    int top = -1;

    for (int i = 0; i < strlen(exp); i++)
    {
        char c = exp[i];

        if (isdigit(c))
        {
            stackArr[++top] = c - '0';
        }
        else
        {
            int b = stackArr[top--];
            int a = stackArr[top--];

            switch (c)
            {
                case '+': stackArr[++top] = a + b; break;
                case '-': stackArr[++top] = a - b; break;
                case '*': stackArr[++top] = a * b; break;
                case '/': stackArr[++top] = a / b; break;
                case '^': stackArr[++top] = pow(a, b); break;
            }
        }
    }

    cout << "Result: " << stackArr[top] << endl;

    return 0;
}
