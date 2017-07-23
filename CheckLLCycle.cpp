bool hasCycle(Node* head) 
{
    Node *sp = head;
    Node *fp = head;

    while (sp && fp && fp->next)
    {
        sp = sp->next;
        fp = fp->next->next;
        if (fp == sp)
            return 1;
    }
    return 0;
}
