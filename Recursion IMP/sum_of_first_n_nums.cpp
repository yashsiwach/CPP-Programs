#include<bits/stdc++.h>
using namespace std;
//Case 1 called paramater with answer
// int sum=0;
// void foo(int i,int n)
// {
// 	if(i>n)
// 	{
// 		cout<<sum<<endl;
// 		return;
// 	}
// 	sum+=i;
// 	foo(i+1,n);	
// 	//also foo(i-1,sum+i)
// }
// int main()
// {
// 	int n;
// 	cin>>n;
// 	foo(1,n);
// 	cout<<sum<<endl;
// }

//ans with funtion return 
int foo(int n)
{
	if(n==0)
	{
		return 0;
	}
	return n+foo(n-1);
}
int main()
{
	int n;
	cin>>n;
	
	cout<<foo(n)<<endl;
}