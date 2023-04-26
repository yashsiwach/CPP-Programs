class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        //ek vector bna leya
        //length leli
        int len=nums.size();
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                //check kra ki i ka index or usse age wala ka sum target k barabar h kya ?
                if(nums[j]+nums[i]==target){
                    // h to push krdo i or j dono index 
                    //mtlb dono k jod se bna h ye target =i+j
                    ans.push_back(i);
                    ans.push_back(j);
                    //rokna jruri h ,kyuki first hi chaye 
                    break;
                }
            }
            //naya vector banya the usme push kre the vo return kro moj krdi !!!
        }return ans;
    } 
        
    
};
