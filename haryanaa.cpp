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
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> v(n);
    vector<int> key(m);
    vector<int> prefix_sum(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> key[i];
    }

    // Calculate the prefix sum of the key
    vector<int> key_prefix_sum(m, 0);
    key_prefix_sum[0] = key[0];
    for (int i = 1; i < m; i++)
    {
        key_prefix_sum[i] = (key_prefix_sum[i - 1] + key[i]) % c;
    }

    // Initialize the prefix sum of the message
    prefix_sum[0] = (v[0] + key_prefix_sum[m - 1]) % c;
    for (int i = 1; i < n; i++)
    {
        int key_index = i - m;
        if (key_index >= 0)
        {
            prefix_sum[i] = (v[i] + key_prefix_sum[m - 1] - key_prefix_sum[key_index] + c) % c;
        }
        else
        {
            prefix_sum[i] = (v[i] + key_prefix_sum[m - 1]) % c;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << prefix_sum[i] << " ";
    }

    cout << endl;
}
