#include<iostream>
using namespace std;
void print(char *p){//fuction input leya 
    cout<<&p<<endl;
}
void sum(int *a, int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=a[i];
    }
    cout<<sum<<endl;

}

int main(){
    int car[4]={3,4,2,9};//arry bana deya 
    int *p=&car[1];//pointer bana deya 2nd index k leye
    cout<<*(p+1)<<endl;//pointer t aagla pirnt kra deya3rd
    char ar[4]="ays";//naya arry banaya char ka
    char *pr=&ar[1];//pointer banaya 1 index la pirnt lene k leye
    cout<<pr<<endl;//pointer ka address kraya print
    print(pr);//funtion banaaya
    sum(p+1,2);//1 index t aga ala lena h


}