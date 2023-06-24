#include<bits/stdc++.h>
using namespace std;
void sub(string in,string out,int i)
{
	if(i>in.size()-1)
	{
		cout<<out<<endl;
		return;
	}
	sub(in,out,i+1);
	
	sub(in,out+in[i],i+1);
}
int main()
{
	string in="yash";
	string out="";
	int i=0;
	sub(in,out,i);
}