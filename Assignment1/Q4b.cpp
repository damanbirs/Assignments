#include <iostream>
using namespace std;

int main ()
{
    cout << "Q4(b): Matrix Multiplication" << endl ;

    int r1, c1, r2, c2 ;

    cout << "Enter rows and cols of first matrix: " ;
    cin >> r1 >> c1 ;

    cout << "Enter rows and cols of second matrix: " ;
    cin >> r2 >> c2 ;

    if (c1 != r2)
    {
        cout << "Matrix multiplication not possible!" << endl ;
        return 0 ;
    }

    int a[10][10], b[10][10], result[10][10] ;

    cout << "Enter first matrix: " ;
    for (int i = 0 ; i < r1 ; i++)
    {
        for (int j = 0 ; j < c1 ; j++)
        {
            cin >> a[i][j] ;
        }
    }

    cout << "Enter second matrix: " ;
    for (int i = 0 ; i < r2 ; i++)
    {
        for (int j = 0 ; j < c2 ; j++)
        {
            cin >> b[i][j] ;
        }
    }

    for (int i = 0 ; i < r1 ; i++)
    {
        for (int j = 0 ; j < c2 ; j++)
        {
            result[i][j] = 0 ;
            for (int k = 0 ; k < c1 ; k++)
            {
                result[i][j] += a[i][k] * b[k][j] ;
            }
        }
    }

    cout << "Resultant matrix:" << endl ;
    for (int i = 0 ; i < r1 ; i++)
    {
        for (int j = 0 ; j < c2 ; j++)
        {
            cout << result[i][j] << " " ;
        }
        cout << endl ;
    }

    return 0 ;
}
