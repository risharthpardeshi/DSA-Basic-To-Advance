//Question Link - https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1


//Approach 
//here we have an advantage that our list is sorted 
//we have to check that curr->next == curr  
//curr ->next->next == curr  

//iterative approach
// Node *removeDuplicates(Node *head){
//     Node* curr  = head;

//     while(curr->next){
//         if(curr->data == curr->next->data){
//             Node* next_next = curr->next->next;
//             delete curr->next;
//             curr -> next = next_next;
//         } else{
//             curr = curr->next;
//         }
//     }
//     return head;
// }