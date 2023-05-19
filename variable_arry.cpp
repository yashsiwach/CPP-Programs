#include<iostream>
using namespace std;
void sum(int *ar,int &a){
    int sum=0;
    for (int i=0;i<a;i++){
        sum+=ar[i];
    }
    cout<<sum;
}
int main(){
    int a;
    cin>>a;
    int *ar=new int [a];
    for (int i=0;i<a;i++){
        cin>>ar[i];
    }
    sum(ar,a);
}