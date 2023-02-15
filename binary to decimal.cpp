#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int y=a;
    int count=0;
    while(a!=0){
        int last=a%10;
        a=a/10;
        count=count+1;   
    }
    int j=0;
    int z=0;
    cout<<y<<endl;

    for(int i=1;i<=count;i++){
        int las=y%10;
        y=y/10;
        int ans=pow(2,j)*las;
        j++;
        z=z+ans;
        

        
    }cout<<z;
}