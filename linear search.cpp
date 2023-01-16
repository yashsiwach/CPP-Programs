#include<iostream>
using namespace std;
void find(int a[],int size,int key){
    for(int i=0;i<size;i++){
        if (a[i]==key){
            
            cout<<i<<endl;
        }
    }
}
int main(){
    int a[6]={4,7,3,8,3,8};
    int size=sizeof(a)/sizeof(int);
    cout<<size<<endl;
    int key;
    cin>>key;
    find(a,size,key);
 
}