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
	
	void bfs (int src)
	{
		queue<int>q;
		unordered_map<int,bool>visited;
		q.push(src);
		visited[src]=true;
		while(!q.empty())
		{
			int front=q.front();
			q.pop();
			cout<<front<<" ";
			for(auto it:gp[front])
			{
				if(!visited[it])
				{
					q.push(it);
					visited[it]=true;
				}
			}
		}
	}
	
	
};
int main(){
	graph g;
	g.addedge(0,1,0);
	g.addedge(1,2,0);
	g.addedge(1,3,0);
	g.addedge(3,5,0);
	g.addedge(3,7,0);
	g.addedge(7,6,0);
	g.addedge(7,4,0);
	cout<<" list is"<<endl;
	g.print();
	g.bfs(0);

}