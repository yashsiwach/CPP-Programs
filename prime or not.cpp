#include<bits/stdc++.h>
using namespace std;
string chack(int a){
    int flag=0;
    for (int i=2;i<a;i++) {
        if(a%i==0) flag=1;
    }
    cout<<flag<<endl;
    if (flag==0) {return "prime";}
    else {return "not prime";}
}
int main(){
    int a;
    cin>>a;
    string ans=chack(a);
    cout<<ans<<endl;
}