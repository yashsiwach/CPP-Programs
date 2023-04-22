class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum1=0 ,sum2=0;
        int len=nums.size();
        for(int i=0;i<len;i++){
            for(auto j=nums.begin();j!=nums.begin()+i;j++)
            {
                sum1+=*(j);
                
            }
            for(auto k=nums.begin()+i+1;k!=nums.end();k++)
            {
                sum2+=*(k);
            }
            if(sum1==sum2) return i;
            sum1=0;
            sum2=0;
            
        }return -1;
        
    }
};