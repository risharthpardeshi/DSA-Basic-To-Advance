/*
Question Link - https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1

1. Firstly we have a LL
1->9->0->NULL and 2->5->NULL
we have to add it so firstly reverse them 
2. Now after reverse we got 
0->9->1->NULL
5->2->NULL
------------
5->1->2->NULL - again we have to reverse it 

final answer - 2->1->5

edge cases - we have to keep mid of the carring.



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
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first = reverseList(first);
        second = reverseList(second);
        
        int sum = 0;
        int carry = 0;
        
        Node* temp = NULL;
        Node* head = NULL;
        Node* tail = NULL;
        
        while(first!=NULL || second!=NULL){
            sum = carry + (first? first->data : 0) + (second? second->data : 0);
            carry = (sum>=10)? 1:0;
            sum = sum%10;
            
            temp = new Node(sum);
            
            if(head == NULL){
                head = temp;
            }else{
                tail->next = temp;
            }
            tail = temp;
            
            if(first) first = first->next;
            if(second) second = second->next;
        }
        if(carry>0){
            tail->next = new Node(carry);
        }
        head = reverseList(head);
        
        return head;
    }
};


*/