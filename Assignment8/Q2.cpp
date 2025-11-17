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

    Node *search1(int key, Node *root)
    {
        while (root != NULL)
        {
            if (key == root->data)
                return root;

            else if (key < root->data)
                root = root->left;

            else
                root = root->right;
        }
        return root;
    }

    Node *search2(int key, Node *root)
    {
        if (root == NULL || root->data == key)
            return root;

        if (key < root->data)
            return search2(key, root->left);

        else
            return search2(key, root->right);
    }

    Node *Min(Node *root)
    {
        if (root == NULL)
            return NULL;
        while (root->left != NULL)
            root = root->left;
        return root;
    }

    Node *Max(Node *root)
    {
        if (root == NULL)
            return NULL;
        while (root->right != NULL)
            root = root->right;
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


Node *deleteNode(Node *root, int key)
{
    if (root == NULL)
        return root;


    if (key < root->data)
    {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteNode(root->right, key);
    }
    else
    {

        if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        Node *succ = root->right;
        while (succ->left != NULL)
            succ = succ->left;

        root->data = succ->data;

        root->right = deleteNode(root->right, succ->data);
    }
    return root;
}

int main()
{
}
