class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>ans;
        for(auto i:nums)
        {
            if(i%2==0) ans.emplace_back(i);
        }
        for(auto j:nums)
        {
            if(j%2!=0) ans.emplace_back(j);
        }
        
        return ans;
    }
};