/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL) return NULL;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL ){
        

            if( fast -> next  == NULL || fast -> next -> next == NULL) return nullptr;
                fast=fast->next->next;
                slow=slow->next;
             if(slow==fast){
                slow=head;
                break;
            }
        }
        
      
    
       
        while(slow!=fast)
        {
            
            fast=fast->next;
            slow=slow->next;
        }
      
        return slow;
        
  
      
    }
};