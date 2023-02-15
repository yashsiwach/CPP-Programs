#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> maxi;//decending order m print
    priority_queue<int,vector<int>,greater<int>>mini;//accending order m
    maxi.push(1);//dalna
    maxi.push(3);
    maxi.push(2);
    maxi.push(5);
    cout<<maxi.size()<<endl;//size check
    int  n=maxi.size();
    for (int i =0;i<n;i++){//to print in decending 
        cout<<maxi.top()<<" ";//top m max aava ga 
        maxi.pop();//print k bad nkl diya
    }cout<<endl;
    mini.push(2);//daldeya
    mini.push(1);
    mini.push(4);
    mini.push(5);
    int m=mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();//print in decending
    }cout<<endl;



}