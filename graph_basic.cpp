#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"enter the number of node"<<endl;
	int n;
	cin>>n;
	 
	cout<<"enter the number of edges"<<endl;
	int e;
	cin>>e;
	vector<vector<int>>adj(n,vector<int>(n,0));
	for(int i=0;i<e;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u][v]=1;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++){
			cout<<adj[i][j]<<" ";
		}
		cout<<endl;
	}
}