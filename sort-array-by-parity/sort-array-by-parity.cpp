class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>ans;
        //sare even to starting m lane h or //odd last m mtlb uske bad me
        for(auto i:nums)
        {
            //agr even h to phale push krdo vector m
            if(i%2==0) ans.emplace_back(i);
        }
        for(auto j:nums)
        {
            //agr odd h to even hone k bad dal do inko
            if(j%2!=0) ans.emplace_back(j);
            
        }
        //soved moj kro done done !!!!!
        
        return ans;
    }
};
