#include <iostream>
using namespace std;

int main ()
{
    int r, c, n ;

    cout << "Enter number of rows: " ;
    cin >> r ;
    cout << "Enter number of cols: " ;
    cin >> c ;
    cout << "Enter number of non-zero elements: " ;
    cin >> n ;

    int row[20], col[20], val[20] ;

    cout << "Enter row, col, value for each element:" << endl ;
    for (int i = 0 ; i < n ; i++)
    {
        cin >> row[i] >> col[i] >> val[i] ;
    }

    int choice ;
    cout << endl ;
    cout << "Q6: Sparse Matrix Operations" << endl ;
    cout << "1. Transpose" << endl ;
    cout << "2. Addition" << endl ;
    cout << "3. Multiplication" << endl ;
    cout << "Enter choice: " ;
    cin >> choice ;

    cout << endl ;

    switch (choice)
    {
        case 1:
        {
            cout << "Q6(a): Transpose" << endl ;
            for (int i = 0 ; i < n ; i++)
            {
                int temp = row[i] ;
                row[i] = col[i] ;
                col[i] = temp ;
            }
            for (int i = 0 ; i < n ; i++)
            {
                cout << row[i] << " " << col[i] << " " << val[i] << endl ;
            }
            break ;
        }

        case 2:
        {
            cout << "Q6(b): Addition of Two Matrices" << endl ;

            int n2 ;
            cout << "Enter number of non-zero elements for 2nd matrix: " ;
            cin >> n2 ;

            int row2[20], col2[20], val2[20] ;
            cout << "Enter row, col, value:" << endl ;
            for (int i = 0 ; i < n2 ; i++)
            {
                cin >> row2[i] >> col2[i] >> val2[i] ;
            }

            cout << "Resultant Matrix (triplet form):" << endl ;
            for (int i = 0 ; i < n ; i++)
            {
                cout << row[i] << " " << col[i] << " " << val[i] << endl ;
            }
            for (int i = 0 ; i < n2 ; i++)
            {
                cout << row2[i] << " " << col2[i] << " " << val2[i] << endl ;
            }
            break ;
        }

        case 3:
        {
            cout << "Q6(c): Multiplication of Two Matrices" << endl ;

            int r2, c2, n2 ;
            cout << "Enter rows and cols of 2nd matrix: " ;
            cin >> r2 >> c2 ;
            cout << "Enter number of non-zero elements in 2nd matrix: " ;
            cin >> n2 ;

            int row2[20], col2[20], val2[20] ;
            cout << "Enter row, col, value:" << endl ;
            for (int i = 0 ; i < n2 ; i++)
            {
                cin >> row2[i] >> col2[i] >> val2[i] ;
            }

            int result[20][3] ;
            int k = 0 ;

            for (int i = 0 ; i < n ; i++)
            {
                for (int j = 0 ; j < n2 ; j++)
                {
                    if (col[i] == row2[j])
                    {
                        result[k][0] = row[i] ;
                        result[k][1] = col2[j] ;
                        result[k][2] = val[i] * val2[j] ;
                        k++ ;
                    }
                }
            }

            cout << "Resultant Matrix (triplet form):" << endl ;
            for (int i = 0 ; i < k ; i++)
            {
                cout << result[i][0] << " " << result[i][1] << " " << result[i][2] << endl ;
            }
            break ;
        }

        default:
            cout << "Invalid choice!" << endl ;
    }

    return 0 ;
}
