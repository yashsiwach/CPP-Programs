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
	
	
};
int main()
{
	graph g;
	g.addedge(0,1,0);
	g.addedge(1,2,0);
	g.addedge(1,3,0);
	g.addedge(3,5,0);
	g.addedge(3,7,0);
	g.addedge(7,6,0);
	g.addedge(7,4,0);
	unordered_map<int,bool> visited;
	for(int i=0;i<7;i++)
	{
		if(!visited[i])
		g.dfs(i,visited);
	}

}