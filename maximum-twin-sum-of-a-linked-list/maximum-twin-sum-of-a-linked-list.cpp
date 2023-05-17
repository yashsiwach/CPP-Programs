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
    int pairSum(ListNode* head) {
        vector<int>yash;
        while(head!=NULL)
        {
            yash.push_back(head->val);
            head=head->next;
        }
        vector<int>temp;
        int i=0,j=yash.size()-1;
        while(i<j)
        {

            int sum=yash[i]+yash[j];
            temp.push_back(sum);
            i++;
            j--;
        }
        auto it=max_element(temp.begin(),temp.end());
        return *it;
        
    }
};