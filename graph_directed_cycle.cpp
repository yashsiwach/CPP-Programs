//DFS and undirected
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
	bool check(int src,unordered_map<int,bool>&visited,unordered_map<int,bool>&dfs)
	{
		visited[src]=true;
		dfs[src]=true;
		for(auto it:gp[src])
		{
			if(!visited[it])
			{
				bool ans=check(it,visited,dfs);
				if(ans==true)
					return true;
			}
			 else if (dfs[it] == true) { // cycle detected
     			 return true;
    		
    		}
		}
		dfs[src] = false;
		return false;
	}
	
	

	
}; 
int main()
{
	graph g;
	g.addedge(0,1,0);
	g.addedge(1,2,0);
	g.addedge(2,0,0);
	g.addedge(3,4,0);
	g.addedge(4,5,0);
	g.addedge(5,6,0);

	bool ans = false;
	unordered_map<int,bool> visited;
	unordered_map<int,bool> dfs;
	for (int i = 0; i < 7; i++) {
	  if (!visited[i])
	    ans = g.check(i, visited,dfs);
	  if (ans == true)
 	   break;
	}
	if (ans == true)
	  cout << "Cycle detected\n";
	else
	  cout << "No cycle detected\n";

}