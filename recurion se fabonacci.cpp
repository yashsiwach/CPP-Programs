#include<iostream>
using namespace std;
int fab(int a){
    if (a==0){
        return 0;
    }
    if (a==1){
        return 1;
    }
    int ans=fab(a-1)+fab(a-2);
    return ans;


}
int main(){
    int a;
    cin>>a;
    int ans=fab(a);
    cout<<ans<<endl;

}