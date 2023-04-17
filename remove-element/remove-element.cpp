class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(auto it:nums)
        {
            if(val==it){
                nums.erase(remove(nums.begin(),nums.end(),val),nums.end());
            }

        }
        
        return nums.size();
    }
};