// https://www.hackerrank.com/challenges/tree-level-order-traversal/problem

#include <queue>

void levelOrder(node * root)
{
    queue<node *> q;
    q.push(root);
    
    while (!q.empty())
    {
        int n = q.size();
        
        while (n--)
        {
            node *temp = q.front();
            q.pop();
            cout << temp->data << " ";
            
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
}
