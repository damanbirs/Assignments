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

    for(int i = 0; i < size; i++){
        if(freqMap[arr[i]] == 1){
            cout << arr[i];
            return 0;
        }
    }
}
