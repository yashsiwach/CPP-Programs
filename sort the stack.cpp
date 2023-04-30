#include<bits/stdc++.h>
using namespace std;
void inserted(stack<int>&jat,int target)
{
    if(jat.empty())
    {
        jat.push(target);
        return;
    }
    if(jat.top()>=target)
    {
        jat.push(target);
        return ;
    }
    int temp=jat.top();
    jat.pop();
    inserted(jat,target);
    jat.push(temp);
}
void sorted(stack<int>&jat)
{
    if(jat.empty())
    {
        return ;
    }
    int target=jat.top();
    jat.pop();
    sorted(jat);
    inserted(jat,target);
}

int main()
{
    stack<int>jat;
    jat.push(10);
    jat.push(20);
    jat.push(60);
    jat.push(40);
    jat.push(50);
    sorted(jat);
    while(!jat.empty())
    {
        cout<<jat.top()<<endl;
        jat.pop();
    }
}