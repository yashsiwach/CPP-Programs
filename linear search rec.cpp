 #include<iostream>
 using namespace std;
 int key(int a[],int size,int keys){
    if (size==0){
        return -1;
    }if (a[0]==keys){
        return 0;
    }else{
        int next=key(a-1,size-1,keys);
        return next;

    }
 }
 int main(){
    int a[6]={3,6,2,4,5,2};
    int keys;
    cin>>keys;
    int size=sizeof(a)/sizeof(int);
    int ans =key(a,size,keys);
    cout<<ans<<endl;
 }//errror