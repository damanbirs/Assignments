#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
   
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

class BST
{
public:
    Node *root;

    BST()
    {
        root = NULL;
    }
    Node *createnode(int value)
    {
        Node *newnode = new Node(value);
       
        newnode->left = newnode->right = NULL;
        return newnode;
    }

    Node *insert(Node *root, int value)
    {
        if (root == NULL)
            return createnode(value);

        if (value < root->data)
            root->left = insert(root->left, value);

        else if (value > root->data)
            root->right = insert(root->right, value);

        else
            cout << "Duplicate not allowed: " << value << endl;

        return root;
    }
};

bool isBST(Node *root, long long minVal, long long maxVal)
{
    if (root == NULL)
        return true;

    if (root->data <= minVal || root->data >= maxVal)
        return false;

    return isBST(root->left, minVal, root->data) &&
           isBST(root->right, root->data, maxVal);
}

int main()
{
    BST tree;
    int value;

    cout << "Enter values to insert into the tree (-1 to stop): ";

   
    int n, val;

    cout << "Enter number of elements: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> val;
        tree.root = tree.insert(tree.root, val);
    }

    if (isBST(tree.root, LLONG_MIN, LLONG_MAX))
        cout << "The tree IS a valid BST\n";
    else
        cout << "The tree is NOT a valid BST\n";

    return 0;
}
