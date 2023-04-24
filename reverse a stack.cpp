#include<bits/stdc++.h>
using namespace std;
void top(stack<int> &jat,int a)
{
    if(jat.empty())
    {
        jat.push(a);
        return;
    }
    int temp=jat.top();
    jat.pop();
    top(jat,a);
    jat.push(temp);
}
void rev(stack<int>&jat)
{
    
    
    if(jat.empty())
    {
     
        return;
    }
    int temp=jat.top();
    jat.pop();
    rev(jat);
    top(jat,temp);
  

}

int main()
{
    stack<int>jat;
    jat.push(10);
    jat.push(20);
    jat.push(30);
    jat.push(40);
    jat.push(50);
    rev(jat);
    while(!jat.empty())
    {
        cout<<jat.top()<<endl;
        jat.pop();

    }
}