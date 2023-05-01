class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        int carry =0,sum =0;
        vector<int >ans;
        for(int i=0 ;i<digits.size();i++)
        {
            if(i==0)
            {
                sum=1+digits[i];
                int digit= sum%10;
                carry=sum/10;
                ans.push_back(digit);
            }
            else
            {
                sum=carry+digits[i];
                int digit=sum%10;
                carry=sum/10;
                ans.push_back(digit);
            }

        }if(carry>0)
        {
            ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};