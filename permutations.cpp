#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<x<< " "<<endl;
#define ll long long int
#define yes cout<<"** YES **"<<endl;
#define no cout<<"** NO **"<<endl;
#define mod 10000000007
#define PI 3.14159265358979323846
#define fo(i,n) for(int i=0;i<n;i++)

void solve(string& a,int i)
{
	if(i>=a.size())
	{
		cout<<a<<" ";
		return ;
	}
	for(int j=i;j<a.length();j++)
	{
		swap(a[j],a[i]);
		solve(a,i+1);
		swap(a[j],a[i]);
	}
}

int main()
{
    std::ios::sync_with_stdio();
    cin.tie(0); cout.tie(0);

    string a;
    cin>>a;
    int i=0;
    solve(a,i);

    

}