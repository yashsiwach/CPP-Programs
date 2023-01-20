#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> a;
    a.push_back(2);//last me dal
    a.push_front(1);//age dal
    for(int i:a){
        cout<<i<<" ";
    }
   
    cout<<"phale elemt"<<a.front()<<endl;//aage aala nkl
    cout<<"last alla"<<a.back()<<endl;//piche ala nkl
    cout<<"empty or not"<<a.empty()<<endl;//kali h k
    cout<<"size"<<a.size()<<endl;//size k h
    a.erase(a.begin());//delte kr dega
    for(int i:a){
        cout<<i<<" ";
    }
}