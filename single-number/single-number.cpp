class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int >jat;
        int ans;
        for(auto it:nums) jat[it]++;
        for(auto i:jat)
        {
            if(i.second==1) ans=i.first;
        }
        cout<<ans<<endl;
        return ans;
        
    }
};