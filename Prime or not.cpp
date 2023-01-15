#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number";
    cin>>a;
    int i=2;
    int count=0;
    while(i<a){
        if (a%i==0){
            count=1;
        }
        i++;
    }
    if (count==0){
        cout<<"yes it is prime"<<endl;
    }else{
        cout<<"not prime"<<endl;
    }

}