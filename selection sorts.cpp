#include<bits/stdc++.h>
using namespace std;
void sot(int arr[], int len) {
    len=4;
    for(int i=0;i<=len-2;i++){
        int min=i;
        for(int j=i;j<=len-1;j++){
            if(arr[min]>arr[j])min=j;

        }int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;

    }

}
int main(){
    int a;
    cin>>a;
    int arr[100];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
  
 
    sot(arr,4);
    for(int j=0;j<a;j++) cout<<arr[j]<<" ";
}