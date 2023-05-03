class Solution {
public:
    string toLowerCase(string s) {
        for(auto& it:s)
        {
            if(isupper(it)) it=tolower(it);
        }return s;
    }
};