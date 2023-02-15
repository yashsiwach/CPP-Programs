#include<iostream>
#include<set>
using namespace std;
int main (){
    set<int> a;
    a.insert(5);//daldeya
    a.insert(3);
    a.insert(2);
    a.insert(4);
    a.insert(4);
    for (auto i:a){
        cout<<i<<" ";
    }cout<<endl;
    set<int>::iterator it=a.begin();//it ki value dali h
    it++;
    a.erase(it);//delete
    for (auto i:a){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"present or not"<<a.count(4)<<endl;//check h ki na
    set<int>::iterator itr=a.find(4);//itr m 4 ka index aaga
}