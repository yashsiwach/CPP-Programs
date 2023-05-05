class Solution {
public:
    bool isvowel(char a)
    {
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
        {
            return true;

        }return false;
    }
    int maxVowels(string s, int k) {
        int count=0;
        for(int i=0;i<k;i++)
        {
            if(isvowel(s[i]))
            {
                count++;
            }
        }
        int maxcount=count;
        for(int i=k;i<s.length();i++)
        {
            if(isvowel(s[i-k]))
            {
                count--;
            }
            if(isvowel(s[i]))
            {
                count++;
            }
            maxcount=max(maxcount,count);
        }
        return maxcount;
    }
};
