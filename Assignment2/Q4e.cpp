#include <iostream>
using namespace std;

int main ()
{
    cout << "Q4(e): Convert Uppercase to Lowercase" << endl ;

    char c ;

    cout << "Enter character: " ;
    cin >> c ;

    if (c >= 'A' && c <= 'Z')
    {
        c = c + 32 ;
    }

    cout << "Lowercase: " << c << endl ;

    return 0 ;
}
