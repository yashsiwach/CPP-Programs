#include <bits/stdc++.h>
 
using namespace std;
 
const int MAX = 200007;
const int MOD = 1000000007;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int mp[26];
    for (int i = 0; i < 26; i++) {
        mp[i] = -1;
    }
    for (int i = 0; i < n; i++) {
        int curr = (s[i] - 'a');
        if (mp[curr] == -1) {
            mp[curr] = (i % 2);
        }
        else {
            if (mp[curr] != (i % 2)) {cout << "NO\n"; return;}
        }
    }
    cout << "YES\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    // solve();
}