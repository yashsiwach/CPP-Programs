#include<bits/stdc++.h>
using namespace std;
class graph{
public:
	unordered_map<int,vector<pair<int,int>>>gp;
	void addedge(int s,int e,int w,bool dir){
		gp[s].push_back({e,w});
		if(dir==1)
		{
			gp[e].push_back({s,w});
		}
	}
	void print(){
		for(auto it:gp)
		{
			cout<<it.first<<"->";
			for(auto i:it.second)
			{
				cout<<"("<<i.first<<")"<<"weight="<<i.second<<" ";
			}
			cout<<endl;
		}
	}
	
	
};
int main(){
	graph g;
	g.addedge(0,1,5,0);
	g.addedge(1,2,9,0);
	g.addedge(0,2,4,0);
	cout<<" list is"<<endl;
	g.print();
}