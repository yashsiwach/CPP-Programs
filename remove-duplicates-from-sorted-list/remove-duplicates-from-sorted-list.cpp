/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *pre=head;
        if(head==NULL || head->next==NULL) return head;
      
        while(pre->next!=NULL)
        {
        

            if(pre->val==pre->next->val){
                pre->next=pre->next->next;
                

            }
            else
            pre=pre->next;
            
        }return head;
        
    }
};