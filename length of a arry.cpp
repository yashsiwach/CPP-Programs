#include<iostream>
using namespace std;
void size(int a[],int an){
    
    cout<<an<<endl;
}
int main(){
    int a[10];
    int ans=sizeof(a)/sizeof(int);
    size(a,ans);
}