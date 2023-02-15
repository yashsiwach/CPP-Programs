#include<iostream>
using namespace std;
inline void max(int& a,int& b){
    int ans=(a>b)? a:b;
    cout<<ans<<endl;
}
int main(){
    int a=3;
    int b=4;
    max(a,b);// funtion me jo h vo copy code hoga yadda memory bacgi
}