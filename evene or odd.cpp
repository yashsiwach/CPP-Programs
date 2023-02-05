#include<bits/stdc++.h>
using namespace std;
string ans(int a){
    if (a&1){
        return "odd";
    }else{
        return "even";
    }
}
int main(){
    int a;
    cin>>a;
    string an=ans(a);
    cout<<an<<endl;
}