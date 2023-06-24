#include<bits/stdc++.h>
using namespace std;
int solve(vector<string>&jat)
{

     set<string>j;
    for(int i=0;i<jat.size();i++)
    {
        sort(jat[i].begin(),jat[i].end());
        j.insert(jat[i]);
    }
    return jat.size()-j.size();
   

}

int main()
{
    vector<string>jat{"ab","ba","cd","za","az"};
    int ans =solve(jat);
    cout<<ans;
}