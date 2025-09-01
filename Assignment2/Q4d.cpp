#include <iostream>
using namespace std;

int main ()
{
    cout << "Q4(d): Sort Strings Alphabetically" << endl ;

    int n ;
    cout << "Enter number of strings: " ;
    cin >> n ;

    char arr[10][50], temp[50] ;

    for (int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
    }

    for (int i = 0 ; i < n - 1 ; i++)
    {
        for (int j = i + 1 ; j < n ; j++)
        {
            int k = 0 ;
            while (arr[i][k] == arr[j][k] && arr[i][k] != '\0' && arr[j][k] != '\0')
            {
                k++ ;
            }
            if (arr[i][k] > arr[j][k])
            {
                int m = 0 ;
                while (arr[i][m] != '\0')
                {
                    temp[m] = arr[i][m] ;
                    m++ ;
                }
                temp[m] = '\0' ;

                m = 0 ;
                while (arr[j][m] != '\0')
                {
                    arr[i][m] = arr[j][m] ;
                    m++ ;
                }
                arr[i][m] = '\0' ;

                m = 0 ;
                while (temp[m] != '\0')
                {
                    arr[j][m] = temp[m] ;
                    m++ ;
                }
                arr[j][m] = '\0' ;
            }
        }
    }

    cout << "Sorted: " ;
    for (int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl ;

    return 0 ;
}
