class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int a=haystack.find(needle);
        if(a==string::npos) return -1;
        else
        return a; 

    }
};