class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>ans;
        char a=' ';
        for(auto it:s) ans[it]++;

        for(int i=0;i<s.size();i++)
        {
            if(ans[s[i]]==1)
            {
                return i;
            }
        }
      
        {
            return -1;
        }
        // if (a == ' ') {
        //    return -1; // No unique characters found
        //}
        //auto i=s.find(a);
        //if(i!=string::npos)
        //{
        //    return i;
        //}
        //else return -1;

    }
};