#include<iostream>
using namespace std;
int rev(int a[],int size){
    int i=0;
    int n=size-1;
    while(i<n){
        int x=a[i];
        a[i]=a[n];
        a[n]=x;
        i++;
        n--;

    }
    for(int i=0;i<size;i++){
    cout<<a[i];
    }
}

int main(){
    int a[6]={2,6,1,7,3,0};
    int size=sizeof(a)/sizeof(int);
    rev(a,size);
   
}