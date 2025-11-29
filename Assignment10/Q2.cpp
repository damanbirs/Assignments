#include <iostream>
using namespace std;

int main(){
    int sizeA, sizeB;
    int arrA[100], arrB[100];
    int visited[1000] = {0};

    cin >> sizeA;
    for(int i = 0; i < sizeA; i++){
        cin >> arrA[i];
        visited[arrA[i]] = 1;
    }

    cin >> sizeB;
    for(int i = 0; i < sizeB; i++){
        cin >> arrB[i];
        if(visited[arrB[i]] == 1)
            cout << arrB[i] << " ";
    }
}
