#include <iostream>
using namespace std;

int main(){
    int size, arr[100], hashSet[1000] = {0};
    cin >> size;

    for(int i = 0; i < size; i++){
        cin >> arr[i];

        if(hashSet[arr[i]] == 1){
            cout << "true";
            return 0;
        }
        hashSet[arr[i]] = 1;
    }
    cout << "false";
}
