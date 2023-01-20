#include<iostream>
using namespace std;
void sel(int a[],int size){
    for(int i=1;i<size;i++){
       
        for(int j=0;j<size-i;j++){
            if(a[j]>a[j+1]){
            swap(a[j+1],a[j]);
            }
           

        }
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