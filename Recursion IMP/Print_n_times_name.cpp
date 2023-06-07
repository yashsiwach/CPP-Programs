#include<bits/stdc++.h>
using namespace std;
void foo(int i,int n)
{
	if(i>n)
		return;
	cout<<"yash"<<endl;
	foo(i+1,n);
}
int main()
{
	int n;
	cin>>n;
	foo(1,n);
}