/*
Problem Link - https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1

In first approach we have to take the length of LL and apply the formula L-(N+1) and then return the node 

In second approach 
class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
                   Node* first = head;
           Node* second = head;
           
           
           for(int i = 1; i<n;i++){
               second = second->next;
               if(second == NULL) return -1;
           }
           
           while(second->next){
               first = first->next;
               second = second->next;
           }
           return first->data;
    }
};

*/