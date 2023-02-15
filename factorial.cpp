#include<bits/stdc++.h>
using namespace std;
int fat(int a){
    int fact=1;
    for (int i=1;i<=a;i++){ fact=fact*i;}
    return fact;
}

int main(){
    int a;
    cin>>a;
    int ans=fat(a);
    cout<<ans<<endl;
}