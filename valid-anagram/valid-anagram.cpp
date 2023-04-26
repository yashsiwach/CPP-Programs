class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>ans;
        map<char,int>ans2;
        if(s.length()!=t.length())return false;
        for(auto it:s) ans[it]++;
        for(auto it:t) ans2[it]++;
        for(auto i:s)
        {
            if(ans[i]!=ans2[i])
            {
                return false;
            }
        }return true ;
        
    }
};