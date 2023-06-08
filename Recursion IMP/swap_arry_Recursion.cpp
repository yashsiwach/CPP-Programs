#include<bits/stdc++.h>
using namespace std;
void foo(int i,int j,vector<int>&jat)
{
	if(i>=j)
		return ;
	cout<<jat[i]<<" " <<jat[j]<<endl;
	swap(jat[i],jat[j]);
		cout<<jat[i]<<" " <<jat[j]<<endl;
	foo(i+1,j-1,jat);
}
int main()
{
	vector<int>jat={1,7,3,6,8,2};
	int start=0;
	int last=jat.size()-1;
	foo(start,last,jat);
	for(auto it:jat)
		cout<<it<<" ";
	cout<<" hi";
}