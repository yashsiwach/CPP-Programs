#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int sum=0;
    while(a>0){
        int ans=a%10;
        a=a/10;
        sum=sum+ans;

    }
    cout<<sum<<endl;
}