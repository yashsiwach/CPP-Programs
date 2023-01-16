#include<iostream>
using namespace std;
int main(){
    int a,count=0;
    cin>>a;
    while(a!=0){
     
   if(a&1==1){
    count++;
   }a=a>>1;
        
    } 
    if (count==1){
        cout<<"yes"<<endl;
    }else{cout<<"no"<<endl;
}}