#include <iostream>
using namespace std;

int main ()
{
    cout << "Q3: Missing Number in Sorted Array" << endl ;

    int n ;
    cout << "Enter size of array (with one missing): " ;
    cin >> n ;

    int arr[50] ;
    cout << "Enter " << n << " elements: " ;
    for (int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
    }

    int total = (n + 1) * (n + 2) / 2 ;

    for (int i = 0 ; i < n ; i++)
    {
        total -= arr[i] ;
    }

    cout << "Missing number: " << total << endl ;

    return 0 ;
}
