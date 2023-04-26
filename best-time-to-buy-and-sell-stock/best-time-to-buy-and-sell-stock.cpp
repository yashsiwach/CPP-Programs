class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //down time pe invest krna h or high pe bech k profit lena h
        
        int n = prices.size();
        int i =0,j=n-1;
        
        int min = prices[0];
        int profit = 0;
        
        for(int i=1;i<n;i++){
            //first index se kra h start kuki 0 ko min man leya h
            if(prices[i]>min){
                //agr min  se bada h uske age wala index mtlb invested mana h min ko ab increase hora h stock
                //dono ki miuns krke profit me dal do 
                //agr pahle se profit jada h to mat chedo
               profit = max(profit,prices[i]-min);
                
            }else if (prices[i]<min){
                //agr min se kam h price mtlb ki next index chota h usse to 
                //mtlb invest krne ka time h stock prices down aaga 
                min = prices[i];
            }else{
                //agr no change h to continue kro 
                //mtlb 1 element repeat kr ra h {1,2,2,3} ase 2 k jase
                continue;
            }
        }
        //min vase hi print kraya h
        
        cout<<min;
        //profit leleo
        return profit;
    }
};
