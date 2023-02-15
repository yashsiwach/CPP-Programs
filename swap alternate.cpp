#include<iostream>
using namespace std;
void swa(int a[],int size){
    for (int i=0;i<size;i+=2){
        if(i+1<size){
            swap(a[i],a[i+1]);
        }
    }
}
void print(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[9]={3,4,6,3,74,7,4,25,4};
    int size=sizeof(a)/sizeof(int);
    swa(a,size);
    print(a,size);

}
 