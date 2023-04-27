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
        //3 node leli 1.head 2.null
        ListNode* curr=head;
        ListNode* pre=NULL;
        ListNode* forr=NULL;
        //jab tk head ya curr null ni hota mtlb sari list triverse ni hoti 
        while(curr!=NULL)
        {
            //curr k aage wale ko  forr me dal do 
            forr=curr->next;
            //curr k next ko forr se hatake pichewale pe lga do
            curr->next=pre;
            //piche wale ko curr bna do or curr ko forr wla mtlb uske age wala
            pre=curr;
            curr=forr;
            // return pre isislye kra khuli ab list ulti hogi piche se start krege ab count !!
        }return pre;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // 2 copy bna li l1 or l2 ki
        ListNode* rev1=l1;
        ListNode* rev2=l2;
        int carry=0;
        //2 list or ban di 
        ListNode* anshead=NULL;
        ListNode* anstail=NULL;
        //jab tk chalo jab tk dono mese koi 1 null na hoje taki upr niche wla num add hote rahe
        while(rev1!=NULL&&rev2!=NULL)
        {
            //sum = carry + 1st list ki value or 2nd list ki value t hi avaga ,suru m to carry 0 h  !!
            int sum =carry+rev1->val+rev2->val;
            //digit nkl di jod aaya tha uski kyuki 1 hi likh saka ha baki carry javaga
            int digit=sum%10;
            //carry bhi agi ista 
            carry=sum/10;
            //newnode bna di digit store krne k leye
            ListNode* newnode=new ListNode(digit);
            //upr extra banai the usme dal do agr khali h to new node ko jisme digit h
            if(anshead==NULL)
            {
                anshead=newnode;
                anstail=newnode;
                
            }
            //agr pahle se h usme kuch to age lga do uske new node
            else {
                anstail->next=newnode;
                anstail=newnode;
            }
            //aga aga hojo ib phale aale number krdeye list k add bachte bhi krdege
            rev1=rev1->next;
            rev2=rev2->next;
        }
        //agr 1st null na hova or 2nd aali hoje ktm to
        while(rev1!=NULL)
        {
            //sum m carry phale ki save milegi jitni left h + list ki value
            int sum =carry+rev1->val;
            //digit nkl di kyuki 1 chaye 
            int digit=sum%10;
            //firse carry bani to add carry 
            carry =sum /10;
            //new node me digit add krdi 
            ListNode* newnode= new ListNode(digit);
            //tail m insert krdo result
            anstail->next=newnode;
            //new node n tail bna do taki next k leye tail ya ban j
            
            anstail=newnode;
            // next kro ab +1 age kro
            rev1=rev1->next;

        }
       //vahi case agr 2nd bachja or 1st jldi ktm hoja
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
       //agr dono ktm hoja or carry bachja
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
