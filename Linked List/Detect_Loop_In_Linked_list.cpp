/*
Question Link - https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1

1. we have to detect the loop we can use FLOYD'S cycle detection 

2. here we can use hashmap too cause iot uses to store the frequency for the same and we will add node in the map not the data cause the data could be deuplicate

3. we use fast and slow approach and if fast and slow meet at some point then we can say that there is loop present in the linked list 

class Solution
{
    public:
    bool detectLoop(Node* head)
    {
        Node* slow = head;
        Node* fast = head;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};


*/