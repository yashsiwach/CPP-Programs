class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* head1 = headA;
        while (head1 != NULL) {
            ListNode* head2 = headB;
            while (head2 != NULL) {
                if (head1 == head2) {
                    return head1;
                }
                head2 = head2->next;
            }
            head1 = head1->next;
        }
        return NULL;
    }
};
