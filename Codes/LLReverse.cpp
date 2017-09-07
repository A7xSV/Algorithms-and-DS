// Question Link: https://www.hackerrank.com/challenges/reverse-a-linked-list

Node* Reverse(Node *head)
{
    Node *prev = NULL;
    Node *current = head;
    Node *next = NULL;
    
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    head = prev;
    return head;
}
