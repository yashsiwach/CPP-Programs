class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m1;
        map<int,int>m2;
        for(auto it:nums1) m1[it]++;
        for(auto it:nums2) m2[it]++;
        vector<vector<int>>ans;
        vector<int>temp;
          vector<int>temp2;
        for(auto it:m1)
        {
            
            if(m2.find(it.first) == m2.end() )
            {
                temp.push_back(it.first);
                
            }
        }ans.push_back(temp);
        for(auto it:m2)
        {
             
            if(m1.find(it.first) == m1.end() )
            {
                temp2.push_back(it.first);
        
            }
        }ans.push_back(temp2);
        return ans;
        
    }
};