#include <queue>

void evenOddSum(node * root)
{
    queue<node *> q;
    q.push(root);
    int evenSum = 0;
    int oddSum = 0;
    int i = 0;
        
    while (!q.empty())
    {
        int n = q.size();
       
        while (n--)
        {
            node *temp = q.front();
            cout << temp->data << " ";
            if (i % 2 == 0)
                evenSum += temp->data;
            else
                oddSum += temp->data;
            q.pop();
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        i++;
    }
    cout << endl << evenSum << endl << oddSum;
}