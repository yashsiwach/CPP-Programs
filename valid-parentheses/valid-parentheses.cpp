class Solution {
public:
    bool isValid(string s) {
        stack<char>jat;
        for(auto i:s)
        {
            char ch=i;
            if(ch=='['||ch=='{'||ch=='(')
            {
                jat.push(ch);
            }
            else
            {
                if(!jat.empty())
                {
                    char top=jat.top();
                    if(top=='['&&ch==']' || top=='('&&ch==')'||top=='{'&&ch=='}')
                    {
                        jat.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else{return false;}
                
            }
        }
        if(jat.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
        
        
    }
};