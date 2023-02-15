#include<iostream>
using namespace std;
void find(int a[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^a[i];
        

    }
    cout<<ans<<endl;
}
int main(){
    int a[5]={3,2,6,3,2};
    int size=sizeof(a)/sizeof(int);
    find(a,size);
}