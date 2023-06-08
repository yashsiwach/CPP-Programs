#include <bits/stdc++.h>
using namespace std;
int n=0;
int foo(int i)
{
	if(i<=1)
		return i;
	
	return  n=foo(i-1)+foo(i-2);
	
}
int main()
{
	int i;
	cin>>i;
	cout<<foo(i);
}