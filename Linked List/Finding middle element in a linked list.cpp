//Question Link - https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1?utm_source=youtube&utm_medium=collab_nishantchahar_description&utm_campaign=middleelement

//Approach
//you have to change the slow to slow->slow->next
//and fast to fast->fast->next->next
//you have to check the base case that fast!=NULL
//fast->next!=NULL
// class Solution{
//     public:

//     int getMiddle(Node *head){
//         Node* slow = head;
//         Node* fast = head;

//         while(fast && fast->next){
//             slow = slow->next;
//             fast = fast -> next -> next;
//         }
//         return slow->data;
//     }
// };