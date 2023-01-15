#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int i=1;
    int count=1;
    while(i<=a){
        int j=1;
        while (j<=i)
        {
            cout<<i+j-1;
            
            j++;
        }
        cout<<endl;
        i=i+1;
        
    }
}
/*
1
23
345
4567
56789
*/