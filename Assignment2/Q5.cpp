#include <iostream>
using namespace std;

int main ()
{
    int n, choice ;
    cout << "Enter size of matrix (n x n): " ;
    cin >> n ;

    cout << endl ;
    cout << "Q5: Special Matrices Menu" << endl ;
    cout << "1. Diagonal Matrix" << endl ;
    cout << "2. Tri-Diagonal Matrix" << endl ;
    cout << "3. Lower Triangular Matrix" << endl ;
    cout << "4. Upper Triangular Matrix" << endl ;
    cout << "5. Symmetric Matrix" << endl ;
    cout << "Enter your choice: " ;
    cin >> choice ;

    cout << endl ;

    switch (choice)
    {
        case 1:
        {
            cout << "Q5(a): Diagonal Matrix" << endl ;
            int diag[n] ;
            cout << "Enter " << n << " diagonal elements: " ;
            for (int i = 0 ; i < n ; i++)
            {
                cin >> diag[i] ;
            }
            for (int i = 0 ; i < n ; i++)
            {
                for (int j = 0 ; j < n ; j++)
                {
                    if (i == j)
                        cout << diag[i] << " " ;
                    else
                        cout << 0 << " " ;
                }
                cout << endl ;
            }
            break ;
        }

        case 2:
        {
            cout << "Q5(b): Tri-Diagonal Matrix" << endl ;
            int tri[3 * n - 2] ;
            cout << "Enter " << 3 * n - 2 << " elements: " ;
            for (int i = 0 ; i < 3 * n - 2 ; i++)
            {
                cin >> tri[i] ;
            }
            int k = 0 ;
            for (int i = 0 ; i < n ; i++)
            {
                for (int j = 0 ; j < n ; j++)
                {
                    if (i == j || i == j + 1 || j == i + 1)
                        cout << tri[k++] << " " ;
                    else
                        cout << 0 << " " ;
                }
                cout << endl ;
            }
            break ;
        }

        case 3:
        {
            cout << "Q5(c): Lower Triangular Matrix" << endl ;
            int low[n * (n + 1) / 2] ;
            cout << "Enter " << n * (n + 1) / 2 << " elements: " ;
            for (int i = 0 ; i < n * (n + 1) / 2 ; i++)
            {
                cin >> low[i] ;
            }
            int k = 0 ;
            for (int i = 0 ; i < n ; i++)
            {
                for (int j = 0 ; j < n ; j++)
                {
                    if (i >= j)
                        cout << low[k++] << " " ;
                    else
                        cout << 0 << " " ;
                }
                cout << endl ;
            }
            break ;
        }

        case 4:
        {
            cout << "Q5(d): Upper Triangular Matrix" << endl ;
            int up[n * (n + 1) / 2] ;
            cout << "Enter " << n * (n + 1) / 2 << " elements: " ;
            for (int i = 0 ; i < n * (n + 1) / 2 ; i++)
            {
                cin >> up[i] ;
            }
            int k = 0 ;
            for (int i = 0 ; i < n ; i++)
            {
                for (int j = 0 ; j < n ; j++)
                {
                    if (i <= j)
                        cout << up[k++] << " " ;
                    else
                        cout << 0 << " " ;
                }
                cout << endl ;
            }
            break ;
        }

        case 5:
        {
            cout << "Q5(e): Symmetric Matrix" << endl ;
            int sym[n * (n + 1) / 2] ;
            cout << "Enter " << n * (n + 1) / 2 << " elements: " ;
            for (int i = 0 ; i < n * (n + 1) / 2 ; i++)
            {
                cin >> sym[i] ;
            }
            int mat[n][n] ;
            int k = 0 ;
            for (int i = 0 ; i < n ; i++)
            {
                for (int j = 0 ; j <= i ; j++)
                {
                    mat[i][j] = sym[k++] ;
                    mat[j][i] = mat[i][j] ;
                }
            }
            for (int i = 0 ; i < n ; i++)
            {
                for (int j = 0 ; j < n ; j++)
                {
                    cout << mat[i][j] << " " ;
                }
                cout << endl ;
            }
            break ;
        }

        default:
            cout << "Invalid choice!" << endl ;
    }

    return 0 ;
}
