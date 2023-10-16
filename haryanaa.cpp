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

bool isprime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {  // Use i * i instead of i < n/2
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int count = 0;
    vector<int> p;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        if (isprime(v[i])) {
            p.pb(i);
        }
    }
    for (int i = 0; i < p.size() - 1; i++) {
        count = 0;
        for (int j = p[i]; j < p[i + 1]; j++) {
            if (v[j] < 0) {
                count++;
            }
        }
        if (count != 0)
            mp[count] = p[i + 1] - p[i] - 1;
    }
    for (auto i : mp) {
        cout << i.first << " " << i.second << endl;
    }
}
