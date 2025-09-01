#include <iostream>
using namespace std;

int main ()
{
    cout << "Q4(a): Reverse Array Elements" << endl ;

    int n ;
    cout << "Enter size of array: " ;
    cin >> n ;

    int arr[50] ;
    cout << "Enter elements: " ;
    for (int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
    }

    cout << "Reversed array: " ;
    for (int i = n - 1 ; i >= 0 ; i--)
    {
        cout << arr[i] << " " ;
    }
    cout << endl ;

    return 0 ;
}
