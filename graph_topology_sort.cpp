#include<bits/stdc++.h>
using namespace std;
class graph{
public:
	unordered_map<int,vector<int>>gp;
	void addedge(int s,int e,bool dir){
		gp[s].push_back(e);
		if(dir==1)
		{
			gp[e].push_back(s);
		}
	}
	void print(){
		for(auto it:gp)
		{
			cout<<it.first<<"->";
			for(auto i:it.second)
			{
				cout<<i<<" ";
			}
			cout<<endl;
		}
	}
	
	void dfs(int src,unordered_map<int,bool>&visited)
	{
		cout<<src<<" ";
		visited[src]=true;
		for(auto it:gp[src])
			{
				if(!visited[it])
				{
					dfs(it,visited);
				}
			}

	}
	void topology(int src,unordered_map<int,bool>&visited, stack<int>&jat)
	{
		visited[src]=true;
		for(auto it:gp[src])
		{
			if(!visited[it])
			{
				topology(it,visited,jat);
			}
		}
		cout<<src<<endl;
		jat.push(src);
	}
	
	
};
int main()
{
	graph g;
	g.addedge(0,1,0);
	g.addedge(1,2,0);
	g.addedge(2,3,0);
	g.addedge(3,4,0);
	g.addedge(3,5,0);
	g.addedge(4,6,0);
	g.addedge(5,6,0);
	g.addedge(6,7,0);
	g.print();
	cout<<endl;
	stack<int>jat;
	unordered_map<int,bool> visited;
	for(int i=0;i<8;i++)
	{
		if(!visited[i])
		g.topology(i,visited,jat);
	}
	while(!jat.empty())
	{
		cout<<jat.top()<<" ";
		jat.pop();
		
	}

}
//graph must be acyclic and directed  