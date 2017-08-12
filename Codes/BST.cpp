#include <iostream>

using namespace std;

class Node
{   
    public:
    
        int data;
        Node *left;
        Node *right;
};

class BST
{
    Node *root;

    Node *createNode(int data)
    {
        Node *nn = new Node;
        nn->left = NULL;
        nn->right = NULL;
        nn->data = data;

        return nn;
    }

    Node *insertNode(Node *root, int data)
    {
        if (root == NULL)
        {
            Node *nn = createNode(data);
            root = nn;
        }
        else if (data <= root->data)
            root->left = insertNode(root->left, data);
        else
            root->right = insertNode(root->right, data);

        return root;
    }

    void preOrder(Node *root)
    {
        if (root == NULL)
            return;

        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }

    void inOrder(Node *root)
    {
        if (root == NULL)
            return;

        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }

    void postOrder(Node *root)
    {
        if (root == NULL)
            return;

        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }

    public:

        BST()
        {
            this->root = NULL;
        }

        void insert(int data)
        {
            this->root = insertNode(this->root, data);
        }

        void preOrder()
        {
            preOrder(this->root);
            cout << endl;
        }

        void inOrder()
        {
            inOrder(this->root);
            cout << endl;
        }

        void postOrder()
        {
            postOrder(this->root);
            cout << endl;
        }
};

int main()
{
    BST t1;
    t1.insert(10);
    t1.insert(9);
    t1.insert(7);
    t1.insert(11);
    t1.insert(12);
    t1.preOrder();
    t1.inOrder();
    t1.postOrder();
}