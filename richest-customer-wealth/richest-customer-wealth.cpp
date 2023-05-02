class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0;
        vector<int>ans;
        for(int i=0;i<accounts.size();i++)
        {
            for(int j=0;j<accounts[i].size();j++)
            {
                sum+=accounts[i][j];

                ans.push_back(sum);
                
            }sum=0;
        }
        auto anss=max_element(ans.begin(),ans.end());
        return *anss;
    }
};