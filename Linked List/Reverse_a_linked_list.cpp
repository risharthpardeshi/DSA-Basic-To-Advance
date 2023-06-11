/*
Problem Link - https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1
suppose we have a linked list 
Input: 2->5->3->7->9
Output: 2<-5<-3<-7<-9


Iterative Appproach 
In this approach we need three things
1. Prev
2. curr
3. next 

1.0 - In first our prev is pointing to NULL and our next is also pointing to NULL and curr is pointing to head 
1.0.1 Now we say that we have 5 in our curr->next so point it to 5
1.1 - we have to join prev to curr->next
1.2 And then move curr by one 
1.3 - What we are doing we have to we have to break the one link 
and make a link b/w prev and curr by breaking the next 

1.4 Now Lets see how things are happining 
Prev = NULL
curr = 2
next = 5
now make curr -> next = prev
Now curr = next
prev = curr
curr = next



class Solution
{
    public:
    struct Node* reverseList(struct Node *head)
    {
        if(head == NULL || head->next == NULL) return head;
        
        Node* curr = head;
        Node* prev = NULL;
        Node* nxt = NULL;
        while(curr){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    
};

*/



/*
recurssive approach
1. Now we say our head will be head.
2. we have to change the prev of hed and next of head 
3. We have to tell recursion that bring me the head of the ans how its gonna bring, it will reverse the rest linked list 


class Solution
{
    public:
    struct Node* reverseList(struct Node *head)
    {
        if(head == NULL || head->next == NULL) return head;
        Node* rest = reverseList(head->next);
        
        head->next->next = head;
        
        head->next = NULL;
        
        return rest;
    }
    
};
*/