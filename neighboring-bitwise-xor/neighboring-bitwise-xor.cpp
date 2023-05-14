class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int count=0;
        for(auto it:derived)
        {
            if(it==1) count++;
        }
        if(count&1) return false;
        else return true;
        
    }
};