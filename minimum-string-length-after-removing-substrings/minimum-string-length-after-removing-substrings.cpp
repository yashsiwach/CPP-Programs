class Solution {
public:
    int minLength(string s) {
        string t1="AB",t2="CD";
        while(s.find(t1)!=string::npos||s.find(t2)!=string::npos)
        {
            if(s.find(t1)!=string::npos)
            {
                int o1=s.find(t1);
                s.erase(o1,2);
            }
            if(s.find(t2)!=string::npos)
            {
                int o2=s.find(t2);
                s.erase(o2,2);
            }
        
        }return s.length();
        
        
        
    }
};