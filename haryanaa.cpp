#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
const ll MOD = 1000000007;
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define nl "\n"
#define pie 3.141592653589793238462
#define set_bits(x) __builtin_popcountll(x)
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr<<#x<<" "<<x<<endl;
#define loop(i,a,b) for(int i=(a);i<(b);i++)
#define print(x) for(auto it:(x)) cout<<(it)<<" "; cout<<endl;
#define showadj for (auto it : adj) { cout << it.ff << " ->"; for (auto i : it.ss) cout << i << " "; cout << endl; }
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T binpow(T base,T power,T mod){ ll ans=1;  base = base % mod;while(power){if(power&1) ans=(ans*base)%mod; base=((base*base)%mod); power>>=1;}return ans;}

void bfs(int node,unordered_map<int,vector<int>>&adj,unordered_map<int,bool>&visi)
{
    queue<int>q;
    visi[node]=true;
    q.push(node);
    while(!q.empty())
    {
        int fr=q.front();
        q.pop();
        cout<<fr<<" ";
        for(auto nbr:adj[fr])
        {
            if(!visi[nbr])
            {
                q.push(nbr);
                visi[nbr]=true;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    unordered_map<int,vector<int>>adj;
    unordered_map<int,bool>visi;
    loop(i,0,m)
    {
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
    }
    for(int i=0;i<n;i++)
    {
        if(!visi[i])bfs(i,adj,visi);
    }
}

