class Solution {
public:
    int countOdds(int low, int high) {
        //low or high k bichme kitne odd h
        int odd=0;
        for(int i=low;i<=high;i++)
        {
            //odd hote h jab &1 hota h or & 0 mtlb even 
            if(i&1)
            {
                odd++;
            }
        }return odd;
        
        
    }
};
