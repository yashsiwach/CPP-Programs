#include<stdio.h>
void main()
{
    printf("enter the nu");
    int a,b;
    char z;
    scanf("%d %d %c",&a,&b,&z);
    switch (z)
    {
    case '+' :
        printf("%d ",a+b);
        break;
    case '-':
        printf("%d ",a-b);
        break;
    case '*':
        printf("%d ",a*b);
        break;
    case '/':
        printf("%d ",a/b);
        break;
        
    default: printf("error");
        break;
    }

}
