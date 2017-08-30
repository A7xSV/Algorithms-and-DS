include <vector>

vector<int> v;

void inOrder(Node *root)
{
    if (root == NULL)
        return;
    
    inOrder(root->left);
    v.push_back(root->data);
    inOrder(root->right);
}

bool checkV()
{
    for (int i = 0; i < v.size() - 1; i++)
        if (v[i] >= v[i + 1])
            return 0;
    return 1;
}

bool checkBST(Node* root) 
{
    inOrder(root);
    return checkV();
}
