#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="siwach";
    stack<char>jat;
    for(auto i:s)
    {
        jat.push(i);
    }
    while(!jat.empty())
    {
        cout<<jat.top()<<endl;
        jat.pop();
    }
}