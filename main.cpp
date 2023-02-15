#include<bits/stdc++.h>
using namespace std;
int main() 
{
  int a;
  cin>>a;
  int b=a;
  int sum=0;
  int fact=1;
  while(a>0)
    {
      int last=a%10;
      a=a/10;
      for(int jk=2;jk<=last;jk++){
          fact=fact*jk;  
        } sum=sum+fact;
      fact=1;
      }cout<<sum<<endl;
  
}