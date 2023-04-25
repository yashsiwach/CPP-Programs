class Solution {
public:
    bool isPalindrome(string s) {
        string s2="";
        
        
        if(s.empty())
        {
            return true;
        }
        for(auto it:s)
        {
            if(isupper(it))
            {
                s2.push_back(tolower(it));
            }
            else{ s2.push_back(it);}
        }
        
        string ans="";
        for(auto i:s2)
        {
            if(isalpha(i)||isdigit(i))
            {
                ans.push_back(i);
            }
        }
        
        string temp="";
        temp=ans;
        reverse(ans.begin(),ans.end());
        if(ans==temp)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};