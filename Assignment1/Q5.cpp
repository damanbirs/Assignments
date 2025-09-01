#include <iostream>
using namespace std;

int main ()
{
    cout << "Q5: Sum of Rows and Columns in 2D Array" << endl ;

    int r, c ;
    cout << "Enter rows and cols: " ;
    cin >> r >> c ;

    int a[10][10] ;
    cout << "Enter matrix: " ;
    for (int i = 0 ; i < r ; i++)
    {
        for (int j = 0 ; j < c ; j++)
        {
            cin >> a[i][j] ;
        }
    }

    for (int i = 0 ; i < r ; i++)
    {
        int rowSum = 0 ;
        for (int j = 0 ; j < c ; j++)
        {
            rowSum += a[i][j] ;
        }
        cout << "Sum of row " << i << ": " << rowSum << endl ;
    }

    for (int j = 0 ; j < c ; j++)
    {
        int colSum = 0 ;
        for (int i = 0 ; i < r ; i++)
        {
            colSum += a[i][j] ;
        }
        cout << "Sum of column " << j << ": " << colSum << endl ;
    }

    return 0 ;
}
