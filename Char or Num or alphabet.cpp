#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    int b= a;
    cout<<b<<endl;
    if(b>=48&& b<=57){
        cout<<"Number" <<endl;

    }else if (b>=97&&b<=122||b>=65&&b<=90)
    {
        cout<<"alphabet h"<<endl;
    }else{
        cout<<"char h"<<endl;
    }
}