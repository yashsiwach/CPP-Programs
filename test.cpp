//****************************Template Begins****************************//

// Header Files
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<utility>
#include<set>
#include<unordered_set>
#include<list>
#include<iterator>
#include<deque>
#include<queue>
#include<stack>
#include<set>
#include<bitset>
#include<random>
#include<map>
#include<unordered_map>
#include<stdio.h>
#include<complex>
#include<math.h>
#include<cstring>
#include<chrono>
#include<string>
// #include "ext/pb_ds/assoc_container.hpp"
// #include "ext/pb_ds/tree_policy.hpp"
// Header Files End

using namespace std;
// using namespace __gnu_pbds;
// template<class T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update> ;

// template<class key, class value, class cmp = std::less<key>>
// using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
// find_by_order(k)  returns iterator to kth element starting from 0;
// order_of_key(k) returns count of elements strictly smaller than k;

#define DIVYA ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define umap unordered_map
#define uset unordered_set
#define lb lower_bound
#define ub upper_bound
#define fo(i,a,b) for(i=a;i<=b;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define sort0(v) sort(all(v))
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
#define sz(x) (ll)x.size()
#define pb push_back
#define ppb pop_back
#define mkp make_pair
#define inf 1000000000000000005
const ll mod = 1e9 + 7;

ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}

ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}

ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}

ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}

ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
//****************************Template Ends*******************************//

int main() {
    DIVYA;
#ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t, n, i, j, ans, temp, sum,m;
    string sans;
    t = 1;
    cin >> t;
    while (t--)
    {
        sans = "NO";
        ans = temp = sum = 0;
        cin >> n;
        vll attack_me(n+1),defense_me(n+1);
        vector<pll>me(n+1);
        fo(i,1,n)
        {
            cin>>attack_me[i];
        }
        fo(i,1,n)
        {
            cin>>defense_me[i];
            me[i] = {defense_me[i],i};
        }
        cin>>m;
        vll attack_him(m+1),defense_him(m+1);
        vector<pll>him(m+1);
        fo(i,1,m)
        {
            cin>>attack_him[i];
        }
        fo(i,1,m)
        {
            cin>>defense_him[i];
            him[i] = {defense_him[i], i};
        }
        sort(all1(me));
        sort(all1(him));
        vll max_attack_him(m+2,-inf);
        vll max_attack_me(n+2,-inf);

        for(i = n;i>0;i--)
        {
            max_attack_me[i] = max(max_attack_me[i+1], attack_me[me[i].second]);
        }
        for(i = m;i>0;i--)
        {
            max_attack_him[i] = max(max_attack_him[i+1], attack_him[him[i].second]);
        }
        vector<bool>winner(n+1,false),loser(n+1,false);

        //determine winners:

        i = 1;
        j = n;

        while(j>0)
        {
            if(me[j].first < max_attack_him[i])break;

            //find out winners:
            while(j > 0 and me[j].first >= max_attack_him[i])
            {
                winner[me[j].second] = true;
                j--;
            }

            //find out losers:
            while(i <= m and him[i].first < max_attack_me[j+1])
            {
                i++;
            }

        }

        //determine losers:
        i = 1;
        j = m;

        while(j>0)
        {
            if(him[j].first < max_attack_me[i])break;

            //find out winners:
            while(j > 0 and him[j].first >= max_attack_me[i])
            {
                j--;
            }

            //find out losers:
            while(i <= n and me[i].first < max_attack_him[j+1])
            {
                loser[me[i].second] = true;
                i++;

            }
        }

        ll w,l,d;
        w = l = d = 0;
        fo(i,1,n)
        {
            if(winner[i])
            {
                w++;
            }
            else if(loser[i])
            {
                l++;
            }
        }   
        d = n - l - w;
        cout<<w<<" "<<d<<" "<<l<<"\n";
    }
    return 0;
}













