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
#define debug(x) cerr << x << " ";

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin >> n >> m;
    vector<ll> v1;
    vector<ll> v2;

    for (ll i = 0; i < n; i++) {
        ll temp;
        cin >> temp;
        v1.push_back(temp);
    }

    for (ll i = 0; i < m; i++) {
        ll temp;
        cin >> temp;
        v2.push_back(temp);
    }

    ll i = 0, j = 0;
    vector<ll> ans;

    ll count = 0;
    while (i < n && j < m) {
        if (v1[i] < v2[j]) {
            i++;
            count++;
        } else if (v1[i] > v2[j]) {
            j++;
            ans.pb(count);
        } else {
           
            j++;
            ans.pb(count);
           
        }
    }

    while (j < m) {
        ans.pb(count);
        j++;
    }

    while (i < n) {
        i++;
        count++;
    }

    for (auto val : ans) {
        cout << val << " ";
    }

    return 0;
}
