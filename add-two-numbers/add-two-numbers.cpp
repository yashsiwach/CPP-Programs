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
    ListNode* rev(ListNode*head)
    {
        ListNode* curr=head;
        ListNode* pre=NULL;
        ListNode* forr=NULL;
        while(curr!=NULL)
        {
            forr=curr->next;
            curr->next=pre;
            pre=curr;
            curr=forr;
        }return pre;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* rev1=l1;
        ListNode* rev2=l2;
        int carry=0;
        ListNode* anshead=NULL;
        ListNode* anstail=NULL;
        while(rev1!=NULL&&rev2!=NULL)
        {
            int sum =carry+rev1->val+rev2->val;
            int digit=sum%10;
            carry=sum/10;
            ListNode* newnode=new ListNode(digit);
            if(anshead==NULL)
            {
                anshead=newnode;
                anstail=newnode;
                
            }
            else {
                anstail->next=newnode;
                anstail=newnode;
            }
            rev1=rev1->next;
            rev2=rev2->next;
        }
        while(rev1!=NULL)
        {
            int sum =carry+rev1->val;
            int digit=sum%10;
            carry =sum /10;
            ListNode* newnode= new ListNode(digit);
            anstail->next=newnode;
            anstail=newnode;
            rev1=rev1->next;

        }
          while(rev2!=NULL)
        {
            int sum =carry+rev2->val;
            int digit=sum%10;
            carry =sum /10;
            ListNode* newnode= new ListNode(digit);
            anstail->next=newnode;
            anstail=newnode;
            rev2=rev2->next;

        }
        while(carry!=0){
            int sum =carry;
            int digit=sum%10;
            carry=sum/10;
            ListNode* newnode= new ListNode(digit);
            anstail->next=newnode;
            anstail=newnode;
        }
        ListNode * ans=anshead;
        return ans;
    }
};