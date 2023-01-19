#include<iostream>
using namespace std;
void sel(int a[],int size){
    for(int i=0;i<size-1;i++){
        int chota=i;
        for(int j=i+1;j<size;j++){
            if(a[j]<a[chota])
            chota=j;

        }swap(a[chota],a[i]);
    } 
}
void print(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[5]={3,5,7,2,9};
    int size=sizeof(a)/sizeof(int);
    sel(a,size);
    print(a,size);
}