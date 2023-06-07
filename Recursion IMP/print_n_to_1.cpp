#include<bits/stdc++.h>
using  namespace std;
void foo(int i,int n)
{
	if(i>n)
		return;
	cout<<n<<" ";
	foo(i,n-1);
}
int main()
{
	int n;
	cin>>n;
	foo(1,n);
}