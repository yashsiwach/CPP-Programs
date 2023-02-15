#include<bits/stdc++.h>
using namespace std;
void digits(int a){
    int count=0;
    while(a!=0){
        int r=a%10;
        a=a/10;
        count++;
    }cout<<count<<endl;
}
int main(){
    int a;
    cin>>a;
    digits(a);
}