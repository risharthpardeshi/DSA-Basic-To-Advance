// Question Link - https://practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1?utm_source=youtube&utm_medium=collab_nishantchahar_description&utm_campaign=deleteanodeinsinglelinklist

// Iterative Approach
Node *deleteNode(Node *head, int x)
{
    if (head == NULL)
    {
        return head;
    }

    Node *curr = head;
    Node *prev = NULL;

    int count = 1;

    while (curr)
    {
        if (count == x)
        {
            if (!prev)
            {
                return curr->next;
            }
            else
            {
                prev->next = curr->next;
                delete curr;
                return head;
            }
        }
        prev = curr;
        curr = curr->next;
        count++;
    }
    return head;
}

// Recursive approach

Node *deleteNode(Node *head, int x)
{
    if (head == NULL)
    {
        return head;
    }

    if (x == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    x--;
    head->next = deleteNode(head->next, x);
    return head;
}
