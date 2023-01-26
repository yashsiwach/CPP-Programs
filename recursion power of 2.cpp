#include<iostream>
using namespace std;
int power(int n){
    if(n==0){
        return 1;
    }
    return 2*power(n-1);


}
int main(){
    int a;
    cin>>a;
    int ans=power(a);
    cout<<ans;
}