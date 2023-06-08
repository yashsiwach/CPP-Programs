#include<bits/stdc++.h>
using namespace std;
bool foo(int i,string &jat)
{
	if(i>=jat.size()/2) return true;
	
	if(jat[i]!=jat[jat.size()-1-i])
		return false;
	foo(i+1,jat);
}
int main()
{
	string jat="madam";
	
	bool jatt=foo(0,jat);
	cout<<jatt<<endl;
	return 0;
}