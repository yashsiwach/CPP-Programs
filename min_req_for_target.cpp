#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&jat,int target)
{
	int m=INT_MAX;
	if(target==0)
	{
		return 0;
	}
	if(target<0)
	{
		return INT_MAX;
	}
	for(int i=0;i<jat.size();i++)
	{
		int ans=solve(jat,target-jat[i]);
		if(ans!=INT_MAX) m=min(ans+1,m);
	}
	return m;
}

int main()
{
	vector<int>jat{1,2};
	int target=5;
	int ans =solve(jat,target);
	cout<<ans<<endl;
}