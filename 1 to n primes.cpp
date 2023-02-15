#include<bits/stdc++.h>
using namespace std;
void jat(int a){
   
    for(int i=2;i<a;i++){
        int flag=0;
        for (int j=2;j<i;j++){
            if (i%j==0){
                flag=1;
            }
        }
        if (flag==0) cout<<i<<endl;
    }
}
int main(){
    int a;
    cin>>a;
jat(a);
    
}