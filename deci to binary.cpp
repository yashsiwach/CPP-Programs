#include<iostream>
#include<string>

using namespace std;
int main(){
    int a;
    cin>>a;
    
    int ans=0;
    string sw="";
    while(a!=0){
        ans=a%2;
        
        a=a/2;
        
        
        
        sw=sw+to_string(ans);
        
    }
    for(int i=sw.length()-1;i>=0;i--){
        cout<<sw[i];
    }
    
}
