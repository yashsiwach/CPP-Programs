class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0,i=0;
        while(i<32){
            if(n&1) count++;
            n=n>>1;
            i++;
        }return count;
        
    }
};