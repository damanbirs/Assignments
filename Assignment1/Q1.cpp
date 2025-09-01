#include <iostream>
using namespace std;

int main ()
{
    cout << "Q1: Menu Driven Array Operations" << endl ;

    int arr[100], n = 0 ;
    int choice ;

    do
    {
        cout << endl ;
        cout << "----- MENU -----" << endl ;
        cout << "1. CREATE" << endl ;
        cout << "2. DISPLAY" << endl ;
        cout << "3. INSERT" << endl ;
        cout << "4. DELETE" << endl ;
        cout << "5. LINEAR SEARCH" << endl ;
        cout << "6. EXIT" << endl ;
        cout << "Enter your choice: " ;
        cin >> choice ;

        switch (choice)
        {
            case 1:
            {
                cout << "Enter number of elements: " ;
                cin >> n ;
                cout << "Enter elements: " ;
                for (int i = 0 ; i < n ; i++)
                {
                    cin >> arr[i] ;
                }
                break ;
            }

            case 2:
            {
                cout << "Array elements: " ;
                for (int i = 0 ; i < n ; i++)
                {
                    cout << arr[i] << " " ;
                }
                cout << endl ;
                break ;
            }

            case 3:
            {
                int pos, val ;
                cout << "Enter position to insert (0-based index): " ;
                cin >> pos ;
                cout << "Enter value: " ;
                cin >> val ;

                for (int i = n ; i > pos ; i--)
                {
                    arr[i] = arr[i - 1] ;
                }
                arr[pos] = val ;
                n++ ;
                break ;
            }

            case 4:
            {
                int pos ;
                cout << "Enter position to delete (0-based index): " ;
                cin >> pos ;

                for (int i = pos ; i < n - 1 ; i++)
                {
                    arr[i] = arr[i + 1] ;
                }
                n-- ;
                break ;
            }

            case 5:
            {
                int key, found = -1 ;
                cout << "Enter value to search: " ;
                cin >> key ;

                for (int i = 0 ; i < n ; i++)
                {
                    if (arr[i] == key)
                    {
                        found = i ;
                        break ;
                    }
                }

                if (found != -1)
                {
                    cout << "Element found at index " << found << endl ;
                }
                else
                {
                    cout << "Element not found" << endl ;
                }
                break ;
            }

            case 6:
            {
                cout << "Exiting program..." << endl ;
                break ;
            }

            default:
                cout << "Invalid choice!" << endl ;
        }

    } while (choice != 6) ;

    return 0 ;
}
