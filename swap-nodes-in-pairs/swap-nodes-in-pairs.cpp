class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) {
            return head;
        }
        
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(fast != NULL && fast->next != NULL) {
            swap(slow->val, fast->val);
            slow = fast->next;
            fast = slow->next;
        }
        
        if(fast != NULL) {
            swap(slow->val, fast->val);
        }
        
        return head;
    }
};