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
    // int len(ListNode*head)
    // {
    //     int count=0;
    //     while(head!=NULL)
    //     {
    //         count++;
    //         head=head->next;
    //     }return count;
    // }
    // ListNode* swapNodes(ListNode* &head, int k) {
    //     ListNode*slow=head;
    //     ListNode*fast=head;
    //     int n=len(head);
    //     for(int i=1;i<k;i++)
    //     {
    //         slow=slow->next;
    //     }
    //     for(int j=0;j<n-k;j++)
    //     {
    //         fast=fast->next;
    //     }
    //     cout<<slow->val<<" "<<fast->val;
    //     swap(slow->val,fast->val);
    //     return head;
        
    // }
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* fast=head,*slow=head,*curr=head;
        int n=0;
        while(curr){curr=curr->next;n++;}
        n=n-k;
        while(n--)fast=fast->next;
        k--;
        while(k--)slow=slow->next;
        swap(slow->val,fast->val);
        return head;
    }
};