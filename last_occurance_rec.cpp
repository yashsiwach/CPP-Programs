#include<bits/stdc++.h>
using namespace std;
int solve(string&jat,char a,int i,int& last)
{
	if(i==jat.size())
	{
		
		return last;
	}
	if(a==jat[i])
	{
		
		last=i;
	}
		
	solve(jat,a,i+1,last);
}
int main()
{
	string jat;
	char a;
	cin>>jat;
	cin>>a;
	int i=0;
	int last=-1;
	int ans=solve(jat,a,i,last);
	cout<<ans<<endl;
}