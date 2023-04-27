class Solution {
public:
    int largestPerimeter(vector<int>& nums) 
    {
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    if(nums[i]+nums[j]>nums[k])
                    {
                    sum =nums[i]+nums[j]+nums[k];
                    }
                }
            }
        }return sum;

        
    }
};//bruteforece h ye 