#include<bits/stdc++.h>
using namespace std;
string addBinary(string a, string b) {
    if(a.length()<b.length())
    {
        int jat=b.length()-a.length();
        cout<<jat<<endl;
        a=a+(string(jat,'0'));
    }
    else
    {
        int jat=a.length()-b.length();
        b=b+(string(jat,'0'));
    }
    int i=0;
    string ans="";
    string carry="";
    while(i<a.length())
    {
        if(a[i]=='1'&&b[i]=='1')
            {
            if(carry=="1"){
                ans.push_back('1');
            }
            ans.push_back('0');
            carry.push_back('1');
        }
        else if(a[i]=='0'&&b[i]=='0')
            {
            if(carry=="1"){
                ans.push_back('1');
                carry.erase(carry.begin(),carry.end());
            }
            else  ans.push_back('0');

        }
        else if(a[i]=='1'&&b[i]=='0'){
            if(carry=="1"){
                ans.push_back('0');
                
            }
            else  ans.push_back('1');
        }
        else if(a[i]=='0'&&b[i]=='1'){
            if(carry=="1"){
                ans.push_back('0');
                
            }
            else  ans.push_back('1');

    }
        
    }return ans;
    }
int main()
{
    string a="111";
    string b="11";
    string ans=addBinary(a,b);
    cout<<ans<<endl;

}