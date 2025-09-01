#include <iostream>
using namespace std;

int main ()
{
    cout << "Q4(c): Delete Vowels" << endl ;

    char s[50], r[50] ;

    cout << "Enter string: " ;
    cin >> s ;

    int j = 0 ;

    for (int i = 0 ; s[i] != '\0' ; i++)
    {
        char c = s[i] ;

        if (c!='a' && c!='e' && c!='i' && c!='o' && c!='u' &&
            c!='A' && c!='E' && c!='I' && c!='O' && c!='U')
        {
            r[j++] = c ;
        }
    }

    r[j] = '\0' ;

    cout << "Without vowels: " << r << endl ;

    return 0 ;
}
