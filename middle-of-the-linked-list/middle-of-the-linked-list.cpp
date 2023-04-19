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
int len(ListNode* head )
{
    int count=0;
    while(head!=NULL)
    {
        count++;
        head=head->next;
    }return count;
    }

    ListNode* middleNode(ListNode* head) {
        int l=len(head);
        int ans=l/2;
        int i=0;
        ListNode* temp=head;
        while(i<ans)
        {
            temp=temp->next;
            i++;
        }return temp;
        
    }
};