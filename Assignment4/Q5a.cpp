#include <iostream>
using namespace std;

int main()
{
    char arr[100];
    int freq[26] = {0};
    int n;

    cout << "Enter number of characters: ";
    cin >> n;

    cout << "Enter the characters:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == ' ')
        {
            i--;
            continue;
        }

        freq[arr[i] - 'a']++;

        char ans = '-';
        for (int j = 0; j <= i; j++)
        {
            if (freq[arr[j] - 'a'] == 1)
            {
                ans = arr[j];
                break;
            }
        }

        if (ans == '-')
        {
            cout << "-1 ";
        }
        else
        {
            cout << ans << " ";
        }
    }

    cout << endl;
    return 0;
}
