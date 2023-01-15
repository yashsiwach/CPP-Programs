#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int i=1;
    int count=1;
    while(i<=a){
        int j=1;
        while (j<=a)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i=i+1;
        
    }
}
/*
1 2 3 4 
5 6 7 8 
9 10 11 12 
13 14 15 16 */