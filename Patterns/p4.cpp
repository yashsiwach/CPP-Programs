#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int i=1;
    int count=1;
    while(i<=a){
        int j=a-i;
        int jk=1;
        
        while(jk<=j){
            
            
            cout<<" ";
            
            jk++;
        }
        int k=1;
        while(k<=i){
            cout<<"*";
            k++;

        }
        cout<<endl;
        i=i+1;
        
    }
}
/*
    *
   **
  ***
 ****
*****
*/