#include<bits/stdc++.h>
using namespace std;
int foo(int n)
{
	if(n==1)
	{
		return 1;
	}
	return n*foo(n-1);
}
int main()
{
	int n;
	cin>>n;
	
	cout<<foo(n)<<endl;
}