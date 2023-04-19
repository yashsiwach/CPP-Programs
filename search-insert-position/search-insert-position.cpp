class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len=nums.size();
        int i=0;
        for(i=0;i<len;i++)
        {
            if(nums[i]==target)
            {
                return i;
            }
            else if(nums[i]>target)
            {
                return i;

            }
        }return i;
    }
};