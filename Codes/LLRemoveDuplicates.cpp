Node *RemoveDuplicates(Node *head)
{
    Node *temp = head;
    Node *ptr;
    Node *s;

    while (temp != NULL)
    {
        ptr = temp;

        while (ptr->next != NULL)
        {
            if (temp->data == ptr->next->data)
            {
                s = ptr->next;
                ptr->next = ptr->next->next;
                delete s;
            }
            else
                ptr = ptr->next;
        }
        temp = temp->next;
    }

    return head;
}
