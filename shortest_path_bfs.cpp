#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<x<< " "<<endl;
#define ll long long int
#define yes cout<<"** YES **"<<endl;
#define no cout<<"** NO **"<<endl;
#define mod 10000000007
#define PI 3.14159265358979323846
#define fo(i,n) for(int i=0;i<n;i++)

class graph{
public:
	unordered_map<int,vector<int>>gp;
	void addedge(int s,int e,bool dir)
	{
		gp[s].push_back(e);
		if(dir==0)
		{
			gp[e].push_back(s);
		}
	}
	void listprint()
	{
		for(auto it:gp)
		{
			cout<<it.first<<"->";
			for(auto n:it.second)
			{
				cout<<n<<" ";
			}
			cout<<endl;
		}
	}
	void shortbfs(int src,int dest)
	{
		queue<int>q;
		unordered_map<int,int>par;
		unordered_map<int ,bool>visited;
		q.push(src);
		visited[src]=true;
		par[src]=-1;
		while(!q.empty())
		{
			int f=q.front();
			q.pop();
			for(auto i:gp[f])
			{
				if(!visited[i])
				{
					q.push(i);
					visited[i]=true;
					par[i]=f;
					

				}
			}
		}
		vector<int> ans;
		int node = dest;
		while(node != -1) {
			ans.push_back(node);
			node = par[node];
		}
		cout << "printing ANs: " << endl;
		for(auto i: ans) {
			cout << i<<", ";
		}
		cout << endl;


	}
};


int main()
{
    std::ios::sync_with_stdio();
    cin.tie(0); cout.tie(0);

    graph g;
	g.addedge(0,1,0);
	g.addedge(1,2,0);
	g.addedge(1,3,0);
	g.addedge(2,0,0);
	g.addedge(3,7,0);
	g.addedge(7,6,0);
	g.addedge(7,4,0);
	g.listprint(); 
	g.shortbfs(0,4);

  

  

}