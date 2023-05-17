
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int>yash,temp;
        while(head!=NULL)
        {
            yash.push_back(head->val);
            head=head->next;
        }

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