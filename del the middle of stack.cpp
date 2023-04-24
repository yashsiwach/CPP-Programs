#include<bits/stdc++.h>
using namespace std ;
void rev(stack<int>&jat,int count,int size)
{
    if(count==(size/2))
    {
        jat.pop();
        return ;
    }
    int temp=jat.top();
    jat.pop();
    rev(jat,count+1,size);
    jat.push(temp);
}
int main()
{
    stack<int>jat;
    jat.push(10);
    jat.push(20);
    jat.push(30);
    jat.push(40);
    jat.push(50);
    jat.push(60);
    int size=jat.size();
    int count=0;
    rev(jat,count,size);
    while(!jat.empty()){
        cout<<jat.top()<<" ";
        jat.pop();
    }
}