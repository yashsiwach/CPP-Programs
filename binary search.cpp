#include<iostream>
#include<algorithm>

using namespace std;
void ans(int a[],int size,int key){
    std::sort(a,a+size);
    int start=0;
    int end=size-1;
    //int mid=(start+end)/2;
    while(start<=end){

        int mid=(start+end)/2;
        if(a[mid]==key){
           cout<<mid<<" ";break;
        } else if (a[mid]<key)
        {
            start=mid+1;
        }else{
            end=mid-1;
        }
        
    }
}
int main(){
    int a[5]={3,7,4,2,6};
    int size=sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    ans(a,size,key);
}