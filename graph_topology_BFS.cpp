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
	void topology(int n,vector<int>&ans)
	{
		queue<int>q;
		unordered_map<int,int>indegree;

		for(auto it:gp)
		{
			int src=it.first;
			for(auto i:it.second)
			{
				indegree[i]++;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(indegree[i]==0)
			{
				q.push(i);
			}
		}
		while(!q.empty())
		{
			int temp=q.front();
			q.pop();

			ans.push_back(temp);
		

			for(auto it:gp[temp])
			{
				indegree[it]--;
				if(indegree[it]==0)
				{
					q.push(it);
				}
			}			
		}
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
	
	vector<int>ans;
	g.topology(8,ans);
	for(auto i:ans)
	{
		cout<<i<< " ";
	}
	cout<<endl;
	if(8==ans.size())
	{
		cout<<"no cycle"<<endl;
	}
	else cout<<"cycle";

}
//cycle detection with the help of bfs kahn's algo 
//graph must be acyclic and directed  