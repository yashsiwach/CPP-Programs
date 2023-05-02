class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //map me dal do sare elements ko 
        unordered_map<int,int>mp;
        //map me occurence kitni bar ari h 
        for(auto i:nums) mp[i]++;
        //agr koi element ki occurence 2 ya 2 se jada hoto true else false
        for(auto i:mp){
            if(i.second>=2)return true;
        }return false;
    }
};
