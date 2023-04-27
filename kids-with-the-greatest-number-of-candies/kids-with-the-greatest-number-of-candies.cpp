class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        //mtlb jisme extra add krde to vo number list me sabse jada ban jaye
        vector<bool>v;
        //max element nkl leya sabse
        auto m=max_element(candies.begin(),candies.end());
        int max=*(m);
        //har 1 me add krke dekhlo ki vo max wale chota h to false krdo 
        for(auto it:candies)
        {
            if(it+extraCandies<max) v.push_back(false);
            else v.push_back(true);
        }return v;

        
    }
};
