class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int i=0;
        while(true)
        {
            char a=0;
            for(auto it:strs)
            {
                if(i>=it.length())
                {
                    a=0;
                    break;
                }
                else if(a==0)
                {
                    a=it[i];
                    
                }
                else if(it[i]!=a)
                {
                    a=0;
                    break;
                }
                
            }
            if(a==0)
            {
                break;
            }
            else
            {
                ans.push_back(a);
            }
            i++;
        }return ans;
        
    }
};