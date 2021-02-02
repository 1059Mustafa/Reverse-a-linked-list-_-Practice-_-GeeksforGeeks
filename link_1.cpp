struct Node* reverseList(struct Node *head)
{
    struct Node *prev=NULL;
    struct Node *curr=head;
    struct Node *next;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

