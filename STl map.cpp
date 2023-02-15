#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>a;
    a[1]="yash";
    a[2]="siwach";
    a[3]="kumar";
    a.insert({4,"jaat"});
    for (auto i:a){
        cout<<i.first<<i.second<<endl;
    }
    cout<<a.count(2)<<endl;//check h ki nhi
    a.erase(3);
    for (auto i:a){
        cout<<i.first<<i.second<<endl;
    }
    auto it=a.find(2);
    for(auto i=it;i!=a.end();i++){
        cout<<(*i).first<<endl;
    }

}