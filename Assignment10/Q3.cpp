#include <iostream>
using namespace std;

int main(){
    int size, arr[100];
    int freqMap[1000] = {0};
    cin >> size;

    for(int i = 0; i < size; i++){
        cin >> arr[i];
        freqMap[arr[i]]++;
    }

    for(int value = 0; value < 1000; value++){
        if(freqMap[value] > 0)
            cout << value << " -> " << freqMap[value] << " times\n";
    }
}
