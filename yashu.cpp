#include <bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
#define DISABLE_STACK_SIZE_CHANGE
#endif
#ifndef DISABLE_STACK_SIZE_CHANGE
#include <sys/resource.h>
#endif
typedef long long ll;
const ll MOD = 1000000007;
#define pb push_back
#define ff first
#define ss second
#define nl "\n"
unordered_map<int,vector<int>>adj;
unordered_map<int,bool>visi;
#define set_bits(x) __builtin_popcountll(x)
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr<<#x<<" "<<x<<endl;
#define loop(i,a,b) for(int i=(a);i<(b);i++)
#define print(x) for(auto it:(x)) cout<<(it)<<" "; cout<<endl;
#define showadj for (auto it : adj) { cout << it.ff << " ->"; for (auto i : it.ss) cout << i << " "; cout << endl; }
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T binpow(T base,T power,T mod){ ll ans=1;  base = base % mod;while(power){if(power&1) ans=(ans*base)%mod; base=((base*base)%mod); power>>=1;}return ans;}

void insert(vector<int>&heap,int val)
{
    heap.pb(val);
    int index=heap.size()-1;
    while(index>0)
    {
        int parent=(index-1)/2;
        if(heap[index]>heap[parent])
        {
            swap(heap[index],heap[parent]);
            index=parent;
        }
        else break;
    }
}
void del(vector<int>&heap,int val=45)
{
    int n=heap.size()-1;
    int index=0;
    for(int i=0;i<=n;i++)
    {
        if(heap[i]==val)
        {
            index=i;
        }
    }
    heap[index]=heap[n];
    heap.pop_back();
    while(index<n)
    {
        int left=2*index+1;
        int right=2*index+2;
        int large=index;
        if(left<n&&heap[left]>heap[index])large=left;
        if(right<n&&heap[right]>heap[index])large=right;
        if(large!=index)
        {
            swap(heap[large],heap[index]);
            index=large;
        }
        else 
        {
            break;
        }
    }
}
int main()
{
    int n;
    vector<int>heap;
    while(cin>>n)
    {
        insert(heap,n);
    }
    print(heap);
    del(heap,50);
    print(heap);
}

