#include<iostream>
using namespace std;
int set(int a){
    int count=0;
    while(a!=0){
    if(a&1==1){
        count++;   
    }a=a>>1;
}return count;
}
int main(){
    int a,b,z,y;
    cin>>a>>b;
    z=set(a);
    y=set(b);
    cout<<y+z<<endl;
    return 0;
    

}