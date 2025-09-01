#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main()
{
    cout << "Q1: Binary Search Algorithm" << endl;
    int arr[] = {10,20,30,40,50,60};

    int n = 6, key;
    cout << "Enter key: ";
    cin >> key;

    int pos = binarySearch(arr,n,key);
        if (pos != -1) 
        cout << "Found at index " << pos << endl;
        else cout << "Not found" << endl;

    return 0;
}
