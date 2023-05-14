class Solution {
public:
    int search(vector<int>& nums, int target) {
        //variable bna do start or end 
        //ek age se start hogi ek piche se
        int start=0,end=nums.size()-1;
        //tempary variable ans and mid 
        int ans=-1;
        int mid=0;
        while(start<=end)
        {
            //mid nklo  phale 
            mid = start + (end - start) / 2;
            //agr target == mid element h to ans me dal do
            if(nums[mid]==target)
            {
                ans=mid;
                break;
       
            }
            //agr target chota h mid se to vo start of mid k bich hoga 
            
            else if(target<nums[mid])
            {
                //mid ko hi end bna do start se mid tk search kro 
                end=mid-1;
            }
            //agr mid se bada h to start ,mid ko bna do 
            else if(target>nums[mid])
            {
                //start ko mid pe set krdo
                start=mid+1;
            }
           //done
           
          
        } return ans;
      }  
};
