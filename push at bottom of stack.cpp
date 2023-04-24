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
int main()
{
    stack<int> jat;
    jat.push(20);
    jat.push(10);
    jat.push(30);
    jat.push(59);
    int a=14;
    top(jat,a);
    while(!jat.empty())
    {
        cout<<jat.top()<<" ";
        jat.pop();
    }

}