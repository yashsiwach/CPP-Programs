#include<bits/stdc++.h>
using namespace std;
int pivotIndex(vector<int>& nums) {
        int sum1=0 ,sum2=0;
        int len=nums.size();
        for(int i=0;i<len;i++){
            for(auto j=nums.begin();j!=nums.begin()+i;j++)
            {
                sum1+=*(j);
                cout<<"this the sum1:"<<sum1<<endl;
                
            }
            for(auto k=nums.begin()+i+1;k!=nums.end();k++)
            {
                sum2+=*(k);
                cout<<"this the sum2:"<<sum2<<endl;
            }
            
            if(sum1==sum2) return i;
            cout<<sum1<<"  " <<sum2<<" ";
            cout<<"checked"<<endl;
            sum1=0;
            sum2=0;
            
        }return -1;
    }
int main(){
    vector<int>jat={1,7,3,6,5,6};
    int ans=pivotIndex(jat);
    cout<<ans<<endl;
}