#include<iostream>
#include<cmath>
using namespace std;
int area(int v){
    float pi=3.14;
    return pi*pow(v,2);
}
int main(){
    int a;
    cin>>a;
    int ans = area(a);
    cout<<ans<<endl;
}
