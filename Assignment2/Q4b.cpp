#include <iostream>
using namespace std;

int main ()
{
    cout << "Q4(b): Reverse String" << endl ;

    char s[50], r[50] ;

    cout << "Enter string: " ;
    cin >> s ;

    int len = 0 ;
    while (s[len] != '\0')
    {
        len++ ;
    }

    for (int i = len - 1, j = 0 ; i >= 0 ; i--, j++)
    {
        r[j] = s[i] ;
    }

    r[len] = '\0' ;

    cout << "Reversed: " << r << endl ;

    return 0 ;
}
