#include<bits/stdc++.h>
using namespace std;
int count(int a,int ar[],int size){
    int counts=0;
    for (int i=0;i<size;i++){
        if(a==ar[i]) counts+=1;

    }return counts;
    
}
int main(){
    int a;
    int b;
    cin>>b;
    int ar[b];
    cout<<"enter the elements of list"<<endl;
    for(int i=0;i<b;i++){
        cin>>ar[i];
    }
    cout<<"enter the nuber to find"<<endl;
    cin>>a;

    
    int ans=count(a,ar,b);
    cout<<ans<<endl;
}