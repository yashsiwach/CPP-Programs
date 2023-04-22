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
   
    ListNode* reverseKGroup(ListNode* head, int k) {
      
        if(head==NULL)
        {
            return NULL;
        }
            
        ListNode*curr=head;
    ListNode* pre=NULL;
    ListNode* forr=curr->next;
        int len=0;
        while (curr != NULL) {
            len++;
            curr = curr->next;
        }
        if(k>len){
            return head;
        }
        
            curr=head;
pre=NULL;
 forr=curr->next;
 
        

    int count=0;
    while(curr!=NULL&&count<k)
    {
        forr=curr->next;
        curr->next=pre;
        
        pre=curr;
        curr=forr;
        count++;

    }
    if(curr!=NULL && forr!=NULL){
        head->next=reverseKGroup(forr,k);

    }return pre;
    }
};