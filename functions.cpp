#include<iostream>
using namespace std;
void print(int a){
    for(int i=1;i<=a;i++){
        cout<<i<<endl;
    }
}
int main(){
    int a;
    cin>>a;
    print(a);
}