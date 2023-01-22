#include<iostream>
using namespace std;
void update(int **pr,int *p){
    *p=*p+1;
    **pr=**pr+1;

}
int main(){
    int a=4;
    int *p=&a;
    int **pr=&p;
    cout<<a<<endl;
    cout<<&p<<endl;
    cout<<pr<<endl;
    update(pr,p);
    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<**pr<<endl;
}