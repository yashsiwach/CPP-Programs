#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>a;
    a.push("yas");//dalne kleye
    a.push("siwach");
    a.push("kumar");
    cout<<a.top()<<endl;//upr aala k leye
    a.pop();//nkl deya
    cout<<a.size()<<endl;//size nklne k leye
    cout<<a.empty()<<endl;//khali h ki nhi 
    

}