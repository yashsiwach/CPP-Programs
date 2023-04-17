//fread() and fwrite with array of structure
#include<stdio.h>
struct student{
char name[30];
int r;
}s[20],s1[20];
int main()
{
FILE *fp;
int n,i;
printf("size=%d\n\n",sizeof(s));
printf("\nEnter Total No. of students\t");
scanf("%d",&n);
fp=fopen("astruct.txt","w");
for(i=0;i<n;i++)
{
printf("enter name and rollno\n");
scanf("%s%d",s[i].name,&s[i].r);
}
int x=fwrite(&s,36,3,fp);
printf("x=%d\n",x);
fclose(fp);
fp=fopen("astruct.txt","r");
printf("\nData in file is: \n");
int y=fread(&s1,36,2,fp);
printf("y=%d\n",y);
for(i=0;i<n;i++)
{
printf("\n%s",s1[i].name);
printf("\t%d",s1[i].r);
}
fclose(fp);
return 0;
}