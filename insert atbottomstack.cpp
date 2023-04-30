#include<bits/stdc++.h>
using namespace std;
void insertatbottom(stack<int>&jat,int target)
{
    if(jat.empty()){
        jat.push(target);
        return;
    }
    int temp=jat.top();
    jat.pop();
    insertatbottom(jat,target);
    jat.push(temp);

}
void rav(stack<int>&jat)
{
    if(jat.empty())
    {
        return;
    }
    int target=jat.top();
    jat.pop();
    rav(jat);
    insertatbottom(jat,target);

}
int main()
{
    stack<int>jat;
    jat.push(10);
    jat.push(30);
    jat.push(40);
    jat.push(50);
    jat.push(60);

    rav(jat);
    while(!jat.empty())
    {
        cout<<jat.top()<<endl;
        jat.pop();
    }
}