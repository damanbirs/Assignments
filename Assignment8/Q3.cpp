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

int maxDepth(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int l = maxDepth(root->left);
    int r = maxDepth(root->right);
    return 1 + max(l, r);
}

int minDepth(Node *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL)
        return 1 + minDepth(root->right);
        
    if (root->right == NULL)
        return 1 + minDepth(root->left);

    return 1 + min(minDepth(root->left), minDepth(root->right));
}
Node* inorderSuccessor(Node* root, Node* key) {
    Node* succ = NULL;

    while (root != NULL) {
        if (key->data < root->data) {
            succ = root;        
            root = root->left;
        } else {
            root = root->right;
        }
    }
    return succ;
}

Node* inorderPredecessor(Node* root, Node* key) {
    Node* pred = NULL;

    while (root != NULL) {
        if (key->data > root->data) {
            pred = root;         
            root = root->right;
        } else {
            root = root->left;
        }
    }
    return pred;
}

int main()
{
    BST tree;
    int n, value;

    cout << "Enter number of nodes to insert: ";
    cin >> n;

    cout << "Enter values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        tree.root = tree.insert(tree.root, value);
    }

    cout << "\nTree created successfully.\n";


    cout << "Maximum Depth: " << maxDepth(tree.root) << endl;
    cout << "Minimum Depth: " << minDepth(tree.root) << endl;


    int keyValue;
    cout << "\nEnter key to find successor & predecessor: ";
    cin >> keyValue;


    Node* temp = tree.root;
    Node* keyNode = NULL;

    while (temp != NULL)
    {
        if (keyValue == temp->data) {
            keyNode = temp;
            break;
        }
        else if (keyValue < temp->data)
            temp = temp->left;
        else
            temp = temp->right;
    }

    if (keyNode == NULL)
    {
        cout << "Key not found in the tree. Cannot find successor or predecessor.\n";
        return 0;
    }


    Node* succ = inorderSuccessor(tree.root, keyNode);
    Node* pred = inorderPredecessor(tree.root, keyNode);

    if (succ)
        cout << "Inorder Successor of " << keyValue << " is: " << succ->data << endl;
    else
        cout << "No Inorder Successor exists.\n";

    if (pred)
        cout << "Inorder Predecessor of " << keyValue << " is: " << pred->data << endl;
    else
        cout << "No Inorder Predecessor exists.\n";

    return 0;
}
