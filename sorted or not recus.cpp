#include<iostream>
using namespace std;
bool check(int a[],int size){
    if(size==0||size==1){
        return true;
    }
    if (a[0]>a[1]){
        return false;
    }
    else{bool ans=check(a+1,size-1);
    return ans;}
}
int main(){
    int a[5]={3,5,6,7,8};
    int size=sizeof(a)/sizeof(int);
    bool ans=check(a,size);
    cout<<ans<<endl;
}