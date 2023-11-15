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
    ofstream out;
    out.open("jat.txt");
    string s="testing success";
    out<<s;
    out.close();

    ifstream in;
    in.open("jat.txt");
    string st;
    in>>st;
    cout<<st;
    //eof means end of line used to read text file is not finised to print
    while(in.eof()==0)
    {
    	getline(in,st);
    	cout<<st<< " ";
    }
    
}

