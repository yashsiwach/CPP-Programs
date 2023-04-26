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
    bool hasCycle(ListNode *head) {
        //apne ko check krna h ki cycle h ye NHI
        ListNode*fast=head;
        ListNode*slow=head;
        //2 new node bna li head ko point kra di
        //fast ko 2 bar chlana h 
        //slow ko 1 bar chlana h
        //jab tk vo mil na jaye 
        while(fast!=NULL){
            //fast 1st time
            fast=fast->next;
            //check kra null to ni h 
            if(fast!=NULL){
                //fir 1 bar or means 2nd time 
                fast=fast->next;
                //slow ko 1 bar chlaya means 1st time
                slow=slow->next;
            }
            //check kra brabar h kya !!
            //agr nhi h to cycle nhi h!!
            if(fast==slow){return true; }
        }return false;
        
    }
};
