#include<bits/stdc++.h>
using namespace std;
class heap{
public:
	vector<int>h;
	int size;
	heap()
	{
		size=0;
	}
	void insert(int val)
	{
		size++;
		int index=size;
		h[index]=val;
		while(index>1)
		{
			int parent=index/2;
			if(h[parent]>h[index])
			{
				swap(h[parent],h[index]);
				index=parent;
			}
			else
			{
				break;
			}
		}		
	}
};
int main()
{
	heap jat;
	jat.h={-1,100,50,60,40,45};
	int size=jat.h.size();
	for(auto it :jat.h) cout<<it<<endl;
}