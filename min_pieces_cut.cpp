#include<bits/stdc++.h>
using namespace std;
int solve(int n,int x,int y , int z)
{
	if(n==0)
	{
		return 0;
	}
	if(n<0) return INT_MIN;
	int a=solve(n-x,x,y,z)+1;
	int b=solve(n-y,x,y,z)+1;
	int c=solve(n-z,x,y,z)+1;
	int ans=max(a,max(b,c));
	return ans;
}
int main()
{
	int len=8;
	int x=4;
	int y=3;
	int z=3;
	int ans=solve(len,x,y,z);
	if(ans<0)
		ans=0;
	cout<<ans;
}