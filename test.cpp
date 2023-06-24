#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sub(vector<int>&rods,vector<int>out,int i,vector<vector<int>>store)
    {
        if(i==rods.size()-1)
        {
            store.push_back(out);
            
            return;
        }
        sub(rods,out,i+1,store);
        out.push_back(rods[i]);
        sub(rods,out,i+1,store);
    }
    int tallestBillboard(vector<int>& rods) {
        vector<int>out;
        int i=0;
        vector<vector<int>>store;
        sub(rods,out,i,store);
        for(auto it:store)
        {
            for(auto i:it) cout<<i<<endl;
        }
        return 0;

        
    }
};