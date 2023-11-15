#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define MOD 1e9 + 7
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
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T binpow(T base,T power){ ll ans=1; while(power){if(power&1) ans=ans*base; base=base*base; power>>=1;}return ans;}


class heap {
public:
    vector<int>v={-1};
    void insert(int val)
    {
        this->v.pb(val);
        int index=v.size()-1;
        while(index>1)
        {
            int parent=index/2;
            if(v[parent]<v[index])
            {
                swap(v[parent],v[index]);
                index=parent;
            }
            else break; 
        }
    }
    void deleted()
    {
        v[1]=v.back();
        v.pop_back();
        int index=1;
        while(index<v.size()-1)
        {
                int left=2*index;
                int right=2*index+1;
                int largest=index;
                if(left<v.size()&&v[left]>v[largest])largest=left;
                if(right<v.size()&&v[right]>v[largest])largest=right;
                if(v[index]==v[largest])break;
                else
                {
                    swap(v[index],v[largest]);
                    largest=index;
                }
        }
    }
    void show()
    {
        print(v);
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    heap h;
    int n;
    cin>>n;
    while(n--)
    {
        int num;
        cin>>num;
        h.insert(num);
    }
    h.show();
    h.deleted();
    h.show();
    
}

