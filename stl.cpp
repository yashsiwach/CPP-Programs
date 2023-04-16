#include<bits/stdc++.h>
using namespace std;
void pairr()
{
    pair<int ,int>jat={2,3};
    cout<<jat.first<<" "<<jat.second<<endl;

    pair<int,pair<int,int>>jaat={1,{3,2}};
    cout<<jaat.first<<" "<<jaat.second.second<<endl;

    pair<int,int>arr[]={{2,4},{3,5},{3,1}};
    cout<<arr[1].second;

}
void explainvector(){
    vector<int>v;
    v.push_back(10);
    v.emplace_back(20);
    v.emplace_back(30);
    v.emplace_back(40);

    vector<pair<int,int>>jat;
    jat.push_back({1,2});
    jat.emplace_back(3,4);

    vector<int> jat1(5,100);//{100,100,100,100,100}
    vector<int>jat2(jat1);//copy hoga 

    vector<int>::iterator it=v.begin();
    cout<<*(it)<<endl;

    vector<int>::iterator idt=v.end();
    cout<<*(idt)<<endl;

    cout<<v[2]<<endl;

    cout<<v.back()<<endl;

    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*(it)<<" ";
    }
    for (auto it:v){
        cout<<it<<" ";
    }

    v.erase(v.begin());
    v.erase(v.begin(),v.end());
    
    vector<int>v1(4,100);
    v1.insert(v1.begin(),10);
    v1.insert(v1.begin()+1,2,10);//{10,10,10,100,100}

    vector<int>cop(3,40);
    v1.insert(v1.begin(),cop.begin(),cop.end());
    cout<<endl;
    for(auto it: v1) cout<<it<<" ";

    cout<<v1.size();

    v1.pop_back();

}
void learnlist()
{
    list<int>ls;
    ls.push_back(10);
    ls.emplace_back(20);
    ls.push_front(30);
    ls.emplace_front(40);
    for(auto it:ls) cout<<it<<" ";
    //fornt me dal sakte h spped me without insert
}

void learndeque()
{
    deque<int>de;
    de.emplace_front(34);
    de.push_back(45);
    de.pop_back();
    de.pop_front();
    de.back();//last elementko print marega 
    de.front();//fornt ko print marega

}
void learnstack(){
    stack<int>st;
    st.push(2);
    st.push(5);
    st.push(6);
    st.emplace(8);

    cout<<st.top()<<endl;

    st.pop();
    cout<<st.size();
    cout<<st.empty();
    
    stack<int>st1,st2;
    st1.swap(st2);
    //last in first out

}
void learnqueue()
{
    queue<int>q;
    q.push(3);
    q.push(5);
    q.emplace(6);
     
    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    //first in first out
    
}
void learnpriorityqueue(){
    priority_queue<int>pq;
    pq.push(4);
    pq.push(5);
    pq.push(8);
    pq.emplace(2);
    cout<<pq.top()<<endl;
    pq.pop();
    //accending order me stort hojge {2,4,5,8}
    //decendion:-
    priority_queue<int,vector<int>,greater<int>>pq1;
    pq1.push(5);
    pq1.push(8);
    pq1.push(2);
    cout<<pq1.top();
    //{8,5,4,2}
}
void learnset()
{
    set<int>st;
    st.insert(4);
    st.insert(5);
    st.insert(3);
    st.insert(3);
    st.emplace(5);
    cout<<st.size();
    cout<<st.empty();
    set<int>st1;
    st.swap(st1);
    auto it=st.find(3);//imp
    st.erase(4);
    int ans=st.count(1);//imp

    st.erase(it);

    auto jat =st.lower_bound(3);
    auto jaat=st.upper_bound(5); 
    //mulitple save ni krta ,samesmae delete krta h
}
void learnmultiset()
{
    multiset<int>mst;
    mst.insert(3);
    mst.insert(5);
    mst.insert(2);
    mst.insert(2);
    mst.erase(2);//sare 2 dlete krdega
    int cnt=mst.count(3);
    mst.erase(mst.find(2));//first occ of 2 dlete hogi
    //multiple same value save kr sakte h
}
void learnunorderedset()
{
    unordered_set<int> us;
    //multi value save ni kr sakte means same
    //random save hoge no acc no decne
    //lowerbound and upperbond will not work
}
void learnmap()
{
    
}
int main()
{
    //pairr();
    //explainvector();
    //learnlist();
    learnpriorityqueue();
}
