#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr<<x<<" ";


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, c;
    cin >> n >> m >> c;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<ll> key(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> key[i];
    }
    ll steps = (n - m) + 1;
    ll i = 0;

    while (steps--)
    {
        vector<ll> temp = v; 
        for (ll k = i; k < i + m; k++)
        {
            temp[k] = (v[k] + key[k - i]) % c; 
        }
        v = temp; 
        i++;
    }
    for (auto i : v)
        cout << i << " ";
    cout << endl;
}
