#include <iostream>
using namespace std;

int main ()
{
    cout << "Q7: Count Inversions in Array" << endl ;

    int n ;
    cout << "Enter size of array: " ;
    cin >> n ;

    int arr[50] ;
    cout << "Enter elements: " ;
    for (int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
    }

    int count = 0 ;

    for (int i = 0 ; i < n ; i++)
    {
        for (int j = i + 1 ; j < n ; j++)
        {
            if (arr[i] > arr[j])
            {
                count++ ;
            }
        }
    }

    cout << "Total Inversions: " << count << endl ;

    return 0 ;
}
