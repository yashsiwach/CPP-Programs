class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len=nums.size();
        int temp=0,num=0;
        for(int i=0;i<len;i++)
        {
            if(nums[i]==0)
            {
                temp++;
                continue;
            }
            nums[num++]=nums[i];
        }
        num=len-1;
        while(temp--)
        {
            nums[num--]=0;
        }
    }
};