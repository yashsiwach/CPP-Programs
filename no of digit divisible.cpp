#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b=a,count=0;
    
        while(a>0){
            
            
            if (b%(a%10) ==0){
                count++;
            }a=a/10;
        }cout<<count<<endl;
}
/*
1248
4
*/