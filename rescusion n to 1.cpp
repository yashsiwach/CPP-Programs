#include<iostream>
using namespace std;
void ans(int a,int b){
    if(a>b){
        cout <<0<<endl;
     
    }
    cout<<a<<endl;
    ans(a,a);
    

}
int main(){
    int a;
    cin>>a;
    ans(1,a);
   
}