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
		size=size+1;
		int index=size;
		h.push_back(val);
		while(index>1)
		{
			int parent=index/2;
			if(h[parent]<h[index])
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
	int deleted()
	{
		int ans=h[1];
		h[1]=h[size];
		size--;
		int index=1;
		while(index<size)
		{
			int left=2*index;
			int right=2*index+1;
			int largest=index;
			if(left<size&&h[largest]<h[left])
				largest=left;
			if(left<size&&h[largest]<h[right])
				largest=right;
			if(largest==index)
				break;
			else
			{
				swap(h[index],h[largest]);
				index=largest;
			}
		}return ans;
	}
};
int main()
{
	heap jat;
	jat.h={-1,100,50,60,40,45};
	jat.size=jat.h.size()-1;
	
	jat.insert(110);
	for(auto it:jat.h) cout<<it<<endl;
}