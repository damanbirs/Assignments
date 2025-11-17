#include <iostream>
using namespace std;

class Node
{   
    public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

Node *buildtree()
{   
    int x;
    cin >> x;

    if (x == -1)
        return NULL;

    Node *root = new Node(x);
    root->left = buildtree();
    root->right = buildtree();
    return root;
}

void preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);

    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
        return;

    postorder(root->left);

    postorder(root->right);

    cout << root->data << " ";
}

int main()
{
    cout << "Enter elements in pre-order (-1 for no node): ";
    Node *root = buildtree();

    cout << "\nPre-order: ";
    preorder(root);

    cout << "\nIn-order: ";
    inorder(root);

    cout << "\nPost-order: ";
    postorder(root);

    return 0;
}
