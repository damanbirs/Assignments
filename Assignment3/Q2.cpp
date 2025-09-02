#include <iostream>
#include <cstring>
using namespace std;

#define MAX 100

int main ()
{
    cout << "Q2: Reverse String using Stack" << endl;

    char str[MAX];
    cout << "Enter a string: ";
    cin >> str;

    int n = strlen(str);
    char stackArr[MAX];
    int top = -1;

    for (int i = 0; i < n; i++)
    {
        stackArr[++top] = str[i];
    }

    cout << "Reversed string: ";
    while (top != -1)
    {
        cout << stackArr[top--];
    }
    cout << endl;

    return 0;
}
