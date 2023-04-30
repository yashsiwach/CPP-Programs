class Solution {
public:
    bool isValid(string s) {
        stack<char>jat;
        for(auto i:s)
        {
            if(i=='('||i=='{'||i=='[')
            {
                jat.push(i);
            }
            else
            {
                if(!jat.empty()){
                char temp=jat.top();
                
                if(temp=='('&&i==')'||temp=='{'&&i=='}'||temp=='['&&i==']')
                {
                    jat.pop();
                }else return false;
                }
                else return false;
            }
        }
        if(jat.empty())return true;
        else return false;
        
    }
};