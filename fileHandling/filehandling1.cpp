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
    //editing txt file(write)
    string s="testing basics";
    ofstream out("testing1.txt");
    out<<s;

    out.close();//to stop now

    //geting text from file(read)
    string temp;
   ifstream in("jat.txt");
   getline(in,temp);
   cout<<temp<<endl;
    

}

