#include <iostream>
using namespace std;

int main ()
{
    cout << "Q8: Count Distinct Elements in Array" << endl ;

    int n ;
    cout << "Enter size of array: " ;
    cin >> n ;

    int arr[50] ;
    cout << "Enter " << n << " elements: " ;
    for (int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
    }

    int distinct = 0 ;

    for (int i = 0 ; i < n ; i++)
    {
        int flag = 0 ;

        for (int j = 0 ; j < i ; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = 1 ;
                break ;
            }
        }

        if (flag == 0)
        {
            distinct++ ;
        }
    }

    cout << "Total distinct elements: " << distinct << endl ;

    return 0 ;
}
