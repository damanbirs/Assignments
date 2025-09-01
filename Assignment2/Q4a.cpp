#include <iostream>
using namespace std;

int main()
{
    cout << "Q4(a): Concatenate Strings" << endl;
    char a[50], b[50], c[100];
    cout << "Enter first string: ";
    cin >> a;
    cout << "Enter second string: ";
    cin >> b;
    int i=0, j=0;
    while (a[i] != '\0')
    {
        c[j++] = a[i++];
    }
    i=0;
    while (b[i] != '\0')
    {
        c[j++] = b[i++];
    }
    c[j] = '\0';
    cout << "Concatenated: " << c << endl;
    return 0;
}
