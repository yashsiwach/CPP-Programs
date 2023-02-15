#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,3> a={3,4,2};
    int size=a.size();//to find size
    cout<<size<<endl;
    cout<<"element at 2  "<<a.at(2)<<endl;
    cout<<"empty"<<a.empty()<<endl;
    cout<<"front elemt"<<a.front()<<endl;
    cout<<"end elemt"<<a.back()<<endl;


}