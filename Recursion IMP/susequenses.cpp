#include<bits/stdc++.h>
using namespace std;
void foo(int i,vector<int>&jat,vector<int>&ans)
{
	if(i==jat.size())
	{
		for(auto it:ans)
		{
			cout<<it<<" ";
		}
		cout<<endl;
		return;
	}
	ans.push_back(jat[i]);
	foo(i+1,jat,ans);
	ans.pop_back();
	foo(i+1,jat,ans);
}
int main()
{
	vector<int>jat={4,3,5};
	vector<int>ans;
	foo(0,jat,ans);
}