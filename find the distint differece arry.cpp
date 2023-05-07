Input: nums = [3,2,3,4,2]
Output: [-2,-1,0,2,3]
Explanation: For index i = 0, there is 1 element in the prefix and 3 distinct elements in the suffix. Thus, diff[0] = 1 - 3 = -2.
For index i = 1, there are 2 distinct elements in the prefix and 3 distinct elements in the suffix. Thus, diff[1] = 2 - 3 = -1.
For index i = 2, there are 2 distinct elements in the prefix and 2 distinct elements in the suffix. Thus, diff[2] = 2 - 2 = 0.
For index i = 3, there are 3 distinct elements in the prefix and 1 distinct element in the suffix. Thus, diff[3] = 3 - 1 = 2.
For index i = 4, there are 3 distinct elements in the prefix and no elements in the suffix. Thus, diff[4] = 3 - 0 = 3.

class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int front=0,mid=0,prefix=0,sufix=0;
      
        vector<int>temp2;
        vector<int>temp;
        vector<int>ans;
        int last=nums.size();
        for(int i=0;i<last;i++)
        {
              set<int>jat;
        
        for(int j=i+1;j<last;j++)
        {
            jat.insert(nums[j]);
            
            
        }temp.push_back(jat.size());
            jat.clear();
        }
        
        
        
        for(int i=0;i<last;i++)
        {
              unordered_set<int>jat;
            
        
        for(int j=0;j<=i;j++)
        {
            jat.insert(nums[j]);
            
            
        }temp2.push_back(jat.size());
            jat.clear();
        }
        for(int i=0;i<last;i++)
        {
            int ans1=temp2[i]-temp[i];
            ans.push_back(ans1);
        }return ans;
        
    }
};

//optmise

vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int>temp1,temp2,ans;
        set<int>st;
        int n=nums.size();
        for(int i:nums){
            st.insert(i);
            temp1.push_back(st.size());
        }
        st.clear();
        for(int i=n-1;i>=0;i--)
        {
            temp2.push_back(st.size());
             st.insert(nums[i]);
        }
        reverse(begin(temp2),end(temp2));
        for(int i=0;i<n;i++)
        ans.push_back(temp1[i]-temp2[i]);
        return ans;
    }