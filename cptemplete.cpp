#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1000000007;

ll binpow(ll base, ll power, ll mod) {
    ll ans = 1;
    base = base % mod; // Ensure the base is within [0, mod)
    while (power > 0) {
        if (power & 1) {
            ans = (ans * base) % mod;
        }
        base = (base * base) % mod;
        power >>= 1;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<ll> v(1000001, 1);
    for (int i = 1; i < 1000001; i++) {
        v[i] = (v[i - 1] * i) % MOD;
    }
    string s;
    cin >> s;
    int ans = 1;
    map<char, int> mp;
    for (auto it : s) {
        mp[it]++;
    }
    for (auto it : mp) {
        if (it.second > 1) {
            ans = (ans * binpow(v[it.second], MOD - 2, MOD)) % MOD;
        }
    }
    int final = (ans * v[s.size()]) % MOD;
    cout << final << endl;
}
