class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        //check krna h ki intersection mtlb 2 list me same element kitne h
        vector<int>ans;     
        //1 vector bna do ans k leye 
        //2 for loop chla do har combination check k leye
            for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                //agr dono eelements list k same combination ho to ans me dal do 
                if(nums1[i]==nums2[j]) 
                {
                    ans.push_back(nums2[j]);
                    //imp:== fir usko min krdo taki dobra count na ho 
                    nums2[j]=INT_MIN;
                    //break isilye kyuki ans mil gya age check ku kre match  ho gya
                    break;
                    
                }
                
                
            }
        }
        
        
        return ans;
        
        
    }
};
