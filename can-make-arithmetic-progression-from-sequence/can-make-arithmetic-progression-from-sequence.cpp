class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        //differce same hona chaye har next element k bichme
        //sort kro 
        sort(arr.begin(),arr.end());
        //first and second element k bich k difference phale save krlo
        int diff=arr[0]-arr[1];
        cout<<diff<<" ";
        //AB sab check kro har 2 ko miuns kr kr k agr upr wle diff k != nhi h to false;
        //false ni aata to true krdo
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]-arr[i+1]!=diff) return false;

        }return true ;
        
    }
};
