#include <iostream>
using namespace std;

struct Node{
    int value;
    Node *left;
    Node *right;
};

int visitedValues[1000] = {0};

bool hasDuplicate(Node* root){
    if(root == NULL) return false;

    if(visitedValues[root->value] == 1)
        return true;

    visitedValues[root->value] = 1;

    return hasDuplicate(root->left) || hasDuplicate(root->right);
}

int main(){
    Node* root = new Node{4, NULL, NULL};
    root->left = new Node{2, NULL, NULL};
    root->right = new Node{5, NULL, NULL};
    root->left->left = new Node{7, NULL, NULL};
    root->left->right = new Node{5, NULL, NULL}; // duplicate

    if(hasDuplicate(root))
        cout << "Duplicates Found";
    else
        cout << "No Duplicates";
}
