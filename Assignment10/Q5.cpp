#include <iostream>
using namespace std;

struct Node{
    int value;
    Node* next;
};

int main(){
    int nodeCount, data;
    int visitedValues[1000] = {0};

    cin >> nodeCount;

    Node *head = NULL, *current = NULL, *newNode;

    for(int i = 0; i < nodeCount; i++){
        cin >> data;
        newNode = new Node{data, NULL};
        if(head == NULL) head = newNode;
        else current->next = newNode;
        current = newNode;
    }

    int loopPos;
    cin >> loopPos;   // -1 = no loop

    if(loopPos != -1){
        Node* loopNode = head;
        for(int i = 0; i < loopPos; i++) loopNode = loopNode->next;
        current->next = loopNode;
    }

    Node* ptr = head;
    while(ptr != NULL){
        if(visitedValues[ptr->value] == 1){
            cout << "true";
            return 0;
        }
        visitedValues[ptr->value] = 1;
        ptr = ptr->next;
    }

    cout << "false";
}
