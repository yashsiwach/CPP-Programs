
#include<stdio.h>
#include<stdlib.h>
int main( )
{

int *p,n,i;
printf("Enter the number of blocks we want to reserve:") ;
scanf("%d",&n) ;
p=(int*)calloc(n,sizeof(int));
if(p==NULL)
{
printf("Memory not available\n");
exit(1);
}
else
{
printf("\n Memory allocation successful");
printf ("\nEnter integer values: ") ;
for(i=0;i<n;i++)
{
scanf("%d",p+i);
}
printf("\n Entered values are:");
for(i=0;i<n;i++)
printf("\n%d",*(p+i));



return 0;
}
}