class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int len=stones.size();
        if (len==1) return stones[0];
        while(len!=1)
        {
            sort(stones.begin(),stones.end());
            if(stones[len-1]==stones[len-2])
            {
                stones.pop_back();
                stones.pop_back();
                stones.push_back(0);
            }
            else
            {
                int temp=stones[len-1]-stones[len-2];
                stones.pop_back();
                stones.pop_back();
                stones.push_back(abs(temp));
            }
            len=stones.size();
        }return stones[0];
        
    }
};