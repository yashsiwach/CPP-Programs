#include<iostream>
using namespace std;
int sum(int a[],int size){
    if(size==0){
        return 0;
    }
    if (size==1){
        return a[0];
    }else{
        int next=sum(a+1,size-1);
        int sum=a[0]+next;
        return sum;
    }
}
int main(){
    int a[5]={1,4,2,3,4};
    int size=sizeof(a)/sizeof(int);
    int ans=sum(a,size);
    cout<<ans<<endl;
}