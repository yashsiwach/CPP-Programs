#include<iostream>
#include<math.h>
using namespace std;
void max(int a[],int b){
    int ax=0;
    int maxi=0;
    for(int i=0;i<b;i++){
        if(a[i]>maxi){
        maxi=a[i];}
    }cout<<maxi<<endl;
}
void print(int a[],int size){
    for (int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    
}
int main(){
    int b;
    cin>>b;
    int a[100];
    for(int i=0;i<b;i++){
        cin>>a[i];

    }
    print(a,b);
    
    max(a,b);
}