struct Node
{
    int data;
    Node *next;
};

struct Node *head;

void reverseLL(struct Node *p)
{
    if (p->next == NULL)
    {
        head = p;
        return;
    }
    reverseLL(p->next);
    p->next->next = p;
    p->next = NULL;
}