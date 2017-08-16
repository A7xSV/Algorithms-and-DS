Node *getLca(node *root, int v1, int v2, node *parent) 
{
    if (v1 > root->data && v2 > root->data) 
        return getLca(root->right, v1, v2, root);

    if (v1 < root->data && v2 < root->data) 
        return getLca(root->left, v1, v2, root);
    
    if (v1 == root->data && v2 == root->data) 
        return parent;
    
    return root;
}

Node *lca(node *root, int v1, int v2)
{
    node *ancestor = getLca(root, v1, v2, NULL);
    return (ancestor == NULL) ? NULL : ancestor;
}