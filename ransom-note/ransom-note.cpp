class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> one;
        map<char,int>two;
        for(auto it:ransomNote) one[it]++;
        for(auto it:magazine) two[it]++;
        for(auto it:ransomNote)
        {
          if(!two.count(it) || one[it]>two[it])
            {
                one[it]--;
                two[it]--;
                return false;
            }
        }return true;
        
    }
};