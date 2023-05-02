class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        int len=salary.size();
        salary.erase(remove(salary.begin(),salary.end(),salary[0]),salary.end());
        salary.erase(remove(salary.begin(),salary.end(),salary[len-1]),salary.end());
        double sum=0;
        int len2=salary.size();
        for(auto i:salary)
        {
                sum=sum+i; 
        }
        cout<<sum<<" "<<len2<<endl;
        double ans=sum/len2;
        return ans;
        
    }
};