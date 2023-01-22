#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    //creating the 2d arry
    int **ar=new int*[a];
    for(int i=0;i<a;i++){
        ar[i]=new int[a];
    }
    //intput
    for (int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cin>>ar[i][j];
        }
    }
    //output
    cout<<endl;
    for (int i =0;i<a;i++){
        for(int j=0;j<a;j++){
            cout<<ar[i][j]<<" ";

        }cout<<endl;
    }
}