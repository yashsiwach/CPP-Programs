#include<bits/stdc++.h>
using namespace std;
// void rev(queue<int>&q)
// {
    
//     if(q.empty())
//     {
//         return ;
//     }
//     int temp=q.front();
//     q.pop();
//     rev(q);
//     q.push(temp);
// }
void usingstack(queue<int>&q)
{
    stack<int>s;
    while(!q.empty())
    {
        int temp=q.front();
        q.pop();
        s.push(temp);
    }
    while(!s.empty())
    {
        int temp=s.top();
        s.pop();
        q.push(temp);
    }
}
int main()
{
    queue<int>q;
    q.push(2);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(8);
   
    //rev(q);
    usingstack(q);
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
}