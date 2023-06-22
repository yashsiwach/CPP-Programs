//bFS and undirected
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
	
	bool check(int src ,unordered_map<int,bool>visited)
	{
		queue<int>q;
		unordered_map<int,int>parent;
		q.push(src);
		visited[src]=true;
		parent[src]=-1;
		while(!q.empty())
		{
			int front=q.front();
			q.pop();
			for(auto it:gp[front])
			{
				if(!visited[it])
				{
					q.push(it);
					visited[it]=true;
					parent[it]=front;

				}
				else{
					if(it!=parent[it])
					{
						return true;
					}
				}
			}

		}return false;

	}

	
	
};
int main()
{
	graph g;
	g.addedge(0,1,0);
	g.addedge(1,2,0);
	g.addedge(1,3,0);
	g.addedge(2,0,0);
	g.addedge(3,7,0);
	g.addedge(7,6,0);
	g.addedge(7,4,0);

	bool ans= false;
	unordered_map<int,bool> visited;
	for(int i=0;i<7;i++)
	{
		if(!visited[i])
		ans=g.check(i,visited);
		if(ans==true) break;
	}
	if(ans==true) cout<<"yes"<<endl;
	else cout<<" NO"<<endl;

}